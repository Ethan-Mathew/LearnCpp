#include <iostream>
#include <string>

template <typename T, typename U, typename V>
class Triad
{
public:
    Triad(const T& p1, const U& p2, const V& p3)
        : m_p1 {p1}, m_p2 {p2}, m_p3 {p3}
    {
    }

    const T& first() const
    {
        return m_p1;
    }

    const U& second() const
    {
        return m_p2;
    }

    const V& third() const
    {
        return m_p3;
    }

    void print() const;

private:
    T m_p1 {};
    U m_p2 {};
    V m_p3 {};
};

template <typename T, typename U, typename V>
void Triad<T, U, V>::print() const
{
    std::cout << "[" << m_p1 << ", " << m_p2 << ", " << m_p3 << "]";
}

int main()
{
	Triad<int, int, int> t1{ 1, 2, 3 };
	t1.print();
	std::cout << '\n';
	std::cout << t1.first() << '\n';

	using namespace std::literals::string_literals;
	const Triad t2{ 1, 2.3, "Hello"s };
	t2.print();
	std::cout << '\n';

	return 0;
}