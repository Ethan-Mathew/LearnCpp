#include <iostream>
#include <string>
#include <string_view>

class Ball
{
public:
    Ball()
        : Ball(defaultColour, defaultRadius)
    {
    }

    Ball(std::string_view colour)
        : Ball(colour, defaultRadius)
    {
    }

    Ball(double radius)
        : Ball(defaultColour, radius)
    {
    }

    Ball(std::string_view colour, double radius)
        : m_colour {colour}, m_radius {radius}
    {
        std::cout << "Ball(" << m_colour << ", " << m_radius << ")\n";
    }

private:
    static constexpr std::string_view defaultColour {"black"};
    static constexpr double defaultRadius {10.0};

    std::string m_colour {defaultColour};
    double m_radius {defaultRadius};
};

int main()
{
    Ball def{};
    Ball blue{ "blue" };
    Ball twenty{ 20.0 };
    Ball blueTwenty{ "blue", 20.0 };

    return 0;
}