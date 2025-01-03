## Rational block preconditioner


- - - - - - - - - - - - 
$-\Delta u + u = f \text{ in } \Omega,$
$u= g =1  \text{ on } \Gamma,$
$u= 0  \text{ on } \partial \Omega$

$P\coloneqq\texttt{diag}(A+M,-\Delta^{s})$, with $s=\frac{1}{2}$.

| DoF number (background + immersed)        | #iter   |
| :---------------------------------------- | :------ |
| 1089+33                                   | 43 |
| 16641+129                                 | 39 |
| 66049+257                                 | 37 |
| 263169+513                                | 37 |
| 1050625+1025                              | 35 |
| 4223931+4097                              | 35 |
| 16836469+8193                             | 35 |


- - - - - - - - 

$-\Delta u = f \text{ in } \Omega,$
$u= g=1  \text{ on } \Gamma,$
$u= 0  \text{ on } \partial \Omega$

$P\coloneqq\texttt{diag}(A,-\Delta^{s})$, with $s=\frac{1}{2}$.

| DoF number (background + immersed)        | #iter   |
| :---------------------------------------- | :------ |
| 1089+33                                   | 30 |
| 4225+65                                   | 30 |
| 16641+129                                 | 28 |
| 66049+257                                 | 28 |
| 263169+513                                | 26 |
| 1050625+1025                              | 28 |
| 1063467+2049                              | 28 |
| 4223931+4097                              | 28 |

- - - - - - - - 

$-\Delta u = 1 \text{ in } \Omega,$
$u= g=1  \text{ on } \Gamma,$
$u= 0  \text{ on } \partial \Omega$

$P\coloneqq\texttt{diag}(A,-\Delta^{s})$, with $s=\frac{1}{2}$.

| DoF number (background + immersed)        | #iter (MinRes)   |
| :---------------------------------------- | :------ |
| 4225+65                                   | 43 |
| 5013+129                                  | 43 |
| 18237+257                                 | 39 |
| 69259+513                                 | 37 |
| 269563+1025                               | 37 |
| 1063467+2049                              | 35 |
| 4223931+4097                              | 35 |
| 16836469+8193                             | 35 |


- - - - - - - - 
$-\Delta u =  8\pi^2 \sin(2\pi x)\sin(2\pi y) \text{ in } \Omega,$
$u = g= \sin(2\pi x)\sin(2\pi y) \text{ on } \Gamma,$
$u= 0  \text{ on } \partial \Omega$

$P\coloneqq\texttt{diag}(A,-\Delta^{s})$, with $s=\frac{1}{2}$.

| DoF number (background + immersed)        | #iter (MinRes)   |
| :---------------------------------------- | :------ |
| 876+65                                    | 41 |
| 2297+129                                  | 42 |
| 6634+257                                  | 38 |
| 21447+513                                 | 34 |
| 75699+1025                                | 22 |
| 282428+2049                               | 12 |
| 1089310+4097                              | 10 |
| 4275759+8193                              | 8 |
| 16940163+16385                              | 6 |


- - - - - - - - 


$-\Delta u = x+1 \text{ in } \Omega,$
$u = g= \sin(y)  \text{ on } \Gamma,$
$u= 0  \text{ on } \partial \Omega$

$P\coloneqq\texttt{diag}(A,-\Delta^{s})$, with $s=\frac{1}{2}$.

| DoF number (background + immersed)        | #iter (MinRes)   |
| :---------------------------------------- | :------ |
| 876+65                                    | 47 |
| 2297+129                                  | 49 |
| 6634+257                                  | 45 |
| 21447+513                                 | 45 |
| 75699+1025                                | 43 |
| 282428+2049                               | 41 |
| 1089310+4097                              | 39 |
| 4275759+8193                              | 39 |



## Michal approach


- - - - - - - - - - - - 
$-\Delta u = f \text{ in } \Omega,$
$u= g  \text{ on } \Gamma,$
$u= 0  \text{ on } \partial \Omega$

$\hat{S}^{-1} \coloneqq CAC^T + M$, with MinRes.

| DoF number (background + immersed)        | #iter   |
| :---------------------------------------- | :------ |
| 1089+33                                  | 49 |
| 4225+65                                   | 77 |
| 16641+129                                 | 111 |
| 66049+257                                 | 90 |
| 263169+513                                | 89 |
| 1050625+1025                              | 87 |
| 1063467+2049                              | 52 |
| 4223931+4097                              | 15 |
| 16836469+8193                             |  |


- - - - - - - - 

$-\Delta u = f \text{ in } \Omega,$
$u= g  \text{ on } \Gamma,$
$u= 0  \text{ on } \partial \Omega$

$\hat{S}^{-1} := CAC^T$, with MinRes.

| DoF number (background + immersed)        | #iter   |
| :---------------------------------------- | :------ |
| 1089+33                                  | 51 |
| 4225+65                                   | 85 |
| 16641+129                                 | 60 |
| 66049+257                                 | 54 |
| 263169+513                                | 30 |
| 1050625+1025                              | 15 |
| 1063467+2049                              | 7 |
| 4223931+4097                              | 3 |
| 16836469+8193                             |  |


## Left diagonal preconditioner + GMRES


- - - - - - - - - - - - 
$-\Delta u = f \text{ in } \Omega,$
$u= g  \text{ on } \Gamma,$
$u= 0  \text{ on } \partial \Omega$

$\hat{S}^{-1} := CAC^T + M$.

| DoF number (background + immersed)        | #iter   |
| :---------------------------------------- | :------ |
| 1089+33                                  | 378 |
| 4225+65                                   | 208 |
| 16641+129                                 | 148 |
| 66049+257                                 | 112 |
| 263169+513                                | 40 |
| 1050625+1025                              | (2) |
| 1063467+2049                              | 6 |
| 4223931+4097                              | 7 |
| 16836469+8193                             |  |


- - - - - - - - 

$-\Delta u = f \text{ in } \Omega,$
$u= g  \text{ on } \Gamma,$
$u= 0  \text{ on } \partial \Omega$

$\hat{S}^{-1} := CAC^T$.

| DoF number (background + immersed)        | #iter   |
| :---------------------------------------- | :------ |
| 1089+33                                  | 96 |
| 4225+65                                   | 30 |
| 16641+129                                 | (2) |
| 66049+257                                 | (5) |
| 263169+513                                | (2) |
| 1050625+1025                              | (3) |
| 1063467+2049                              | (0) |
| 4223931+4097                              | (0) |
| 16836469+8193                             |  |


## Right upper triangular preconditioner + GMRES


- - - - - - - - - - - - 
$-\Delta u = f=0 \text{ in } \Omega,$
$u= 1  \text{ on } \Gamma,$
$u= 0  \text{ on } \partial \Omega$
*Elman BFBt preconditioner*
$\hat{S}^{-1} := (CC^T)^{-1} C A  C^T(CC^T)^{-1}$.


| DoF number (background + immersed)        | #iter   |
| :---------------------------------------- | :------ |
| 1089+33                                   | 15 |
| 4225+65                                   | 19 |
| 16641+129                                 | 24 |
| 66049+257                                 | 36 |
| 263169+513                                | 47 |
| 1050625+1025                              | 69 |
| 1063467+2049                              | 84 |
| 4223931+4097                              | 116 |
<!-- | 1089+33                                   | 19 |
| 4225+65                                   | 27 |
| 16641+129                                 | 54 |
| 66049+257                                 | 110 |
| 263169+513                                | 223 |
| 1050625+1025                              | 690 |
| 1063467+2049                              | >1000 |
| 4223931+4097                              | 15 |
| 16836469+8193                             |  | -->


$-\Delta u = f \text{ in } \Omega,$
$u= g  \text{ on } \Gamma,$
$u= 0  \text{ on } \partial \Omega$

$\hat{S}^{-1} := C * A * Ct + M$.

| DoF number (background + immersed)        | #iter   |
| :---------------------------------------- | :------ |
| 1089+33                                  | 165 |
| 4225+65                                   | 299 |
| 16641+129                                 | 747 |
| 66049+257                                 | 769 |
| 263169+513                                | >1000 |
| 1050625+1025                              | 471 |
| 1063467+2049                              | 418 |
| 4223931+4097                              | 44 |
| 16836469+8193                             |  |


$-\Delta u = f \text{ in } \Omega,$
$u= g  \text{ on } \Gamma,$
$u= 0  \text{ on } \partial \Omega$

$\hat{S}^{-1} := C * A * Ct $.

| DoF number (background + immersed)        | #iter   |
| :---------------------------------------- | :------ |
| 1089+33                                  | 746 |
| 4225+65                                   | 896 |
| 16641+129                                 | 232 |
| 66049+257                                 | 65 |
| 263169+513                                | 25 |
| 1050625+1025                              | 28 |
| 1063467+2049                              | 4 |
| 4223931+4097                              | 48 |
| 16836469+8193                             |  |



## Left lower triangular preconditioner + GMRES


- - - - - - - - - - - - 
$-\Delta u = f \text{ in } \Omega,$
$u= g  \text{ on } \Gamma,$
$u= 0  \text{ on } \partial \Omega$

$\hat{S}^{-1} := C * A * Ct + M$.

| DoF number (background + immersed)        | #iter   |
| :---------------------------------------- | :------ |
| 1089+33                                  | 85 |
| 4225+65                                   | 98 |
| 16641+129                                 | 83 |
| 66049+257                                 | 65 |
| 263169+513                                | 26 |
| 1050625+1025                              | 9 |
| 1063467+2049                              | (2) |
| 4223931+4097                              | (2) |
| 16836469+8193                             |  |


$-\Delta u = f \text{ in } \Omega,$
$u= g  \text{ on } \Gamma,$
$u= 0  \text{ on } \partial \Omega$

$\hat{S}^{-1} := C * A * Ct $.

| DoF number (background + immersed)        | #iter   |
| :---------------------------------------- | :------ |
| 1089+33                                  | 52 |
| 4225+65                                   | 23 |
| 16641+129                                 | 11 |
| 66049+257                                 | (4) |
| 263169+513                                | (2) |
| 1050625+1025                              | (2) |
| 1063467+2049                              | (0) |
| 4223931+4097                              | (0) |
| 16836469+8193                             |  |


## Right upper triangular preconditioner + FGMRES


- - - - - - - - - - - - 
$-\Delta u = f \text{ in } \Omega,$
$u= g  \text{ on } \Gamma,$
$u= 0  \text{ on } \partial \Omega$

$\hat{S}^{-1} := C * A * Ct + M$.

| DoF number (background + immersed)        | #iter   |
| :---------------------------------------- | :------ |
| 1089+33                                  | 165 |
| 4225+65                                   | 299 |
| 16641+129                                 | 800 |
| 66049+257                                 |  |
| 263169+513                                | >1000 |
| 1050625+1025                              | 328 |
| 1063467+2049                              | 69 |
| 4223931+4097                              | 71 |
| 16836469+8193                             |  |


$-\Delta u = f \text{ in } \Omega,$
$u= g  \text{ on } \Gamma,$
$u= 0  \text{ on } \partial \Omega$

$\hat{S}^{-1} := C * A * Ct $.

| DoF number (background + immersed)        | #iter   |
| :---------------------------------------- | :------ |
| 1089+33                                  | 745 |
| 4225+65                                   | 990 |
| 16641+129                                 | 51 |
| 66049+257                                 | 34 |
| 263169+513                                | 25 |
| 1050625+1025                              | 28 |
| 1063467+2049                              | 4 |
| 4223931+4097                              | 35 |
| 16836469+8193                             |  |
