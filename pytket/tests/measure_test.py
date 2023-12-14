from pytket import Circuit

def test_measure() -> None:
    circ = Circuit()
    try:
        circ.Measure(0, 0)
    except:
        pass
    circ.Measure()

if __name__ == '__main__':
    test_measure()
