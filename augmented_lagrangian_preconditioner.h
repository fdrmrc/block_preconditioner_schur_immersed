#ifndef augmented_lagrangian_prec_h
#define augmented_lagrangian_prec_h

#include <deal.II/lac/block_vector.h>
#include <deal.II/lac/linear_operator.h>
#include <deal.II/lac/linear_operator_tools.h>
#include <deal.II/lac/precondition.h>
#include <deal.II/lac/solver_cg.h>
#include <deal.II/lac/sparse_matrix.h>
#include <deal.II/lac/vector.h>

using namespace dealii;

class BlockPreconditionerAugmentedLagrangian {
 public:
  BlockPreconditionerAugmentedLagrangian(
      const LinearOperator<Vector<double>> Aug_inv_,
      const LinearOperator<Vector<double>> C_,
      const LinearOperator<Vector<double>> Ct_,
      const LinearOperator<Vector<double>> invW_, const double gamma_ = 1e2) {
    Aug_inv = Aug_inv_;
    C = C_;
    Ct = Ct_;
    invW = invW_;
    gamma = gamma_;
  }

  void vmult(BlockVector<double> &v, const BlockVector<double> &u) const {
    v.block(0) = 0.;
    v.block(1) = 0.;

    v.block(1) = -gamma * invW * u.block(1);
    v.block(0) = Aug_inv * (u.block(0) - Ct * v.block(1));
  }

  LinearOperator<Vector<double>> K;
  LinearOperator<Vector<double>> Aug_inv;
  LinearOperator<Vector<double>> C;
  LinearOperator<Vector<double>> invW;
  LinearOperator<Vector<double>> Ct;
  double gamma;
};

#endif