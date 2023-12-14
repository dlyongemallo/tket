// C++ version of test_dagger

#include "testutil.hpp"

namespace tket {
namespace test_Dagger {

SCENARIO("test dagger works with barrier") {
    Circuit circ(2);
    circ.add_op<unsigned>(OpType::X, {0});
    circ.add_op<unsigned>(OpType::CX, {0, 1});
    circ.add_op<unsigned>(OpType::Barrier, {0, 1});

    circ.add_op<unsigned>(OpType::RZ, 0.4, {1});

    circ.Dagger();
}

} // namespace test_Dagger
} // namespace tket
