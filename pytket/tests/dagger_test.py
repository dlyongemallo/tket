from pytket import Circuit

def test_barrier() -> None:
    circ = Circuit(2)
    circ.X(0).CX(0, 1)
    circ.add_barrier([0, 1])
    circ.Rz(0.4, 1)

    circ.dagger()

if __name__ == '__main__':
    test_barrier()