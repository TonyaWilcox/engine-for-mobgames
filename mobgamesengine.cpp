#include <vector>
#include <cmath>

const float GRAVITY = 9.8f;

class RigidBody {
public:
    float mass;
    float velocity;
    float position;
    float acceleration;

    void update(float deltaTime) {
        acceleration += -GRAVITY;
        velocity += acceleration * deltaTime;
        position += velocity * deltaTime;
    }
};

std::vector<RigidBody> objects;

void simulate(float deltaTime) {
    for (RigidBody& object : objects) {
        object.update(deltaTime);
    }
}
