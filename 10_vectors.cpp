#include <iostream>
#include <vector>

struct Vertex {
    float x, y, z;

    // overloading the << operator to print the Vertex
    friend std::ostream& operator<<(std::ostream& os, const Vertex& v) {
        os << "Vertex(" << v.x << ", " << v.y << ", " << v.z << ")";
        return os;
    }
};

int main() {
    std::vector<Vertex> vertices;

    vertices.push_back({1, 2, 3});
    vertices.push_back({4, 5, 6});

    std::cout << "Number of vertices: " << vertices.size() << std::endl;
    
    for (int i = 0; i < vertices.size(); i++) {
        std::cout << vertices[i] << std::endl;  
    }
    return 0;
}
