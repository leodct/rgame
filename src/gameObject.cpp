#include "gameObject.hxx"

GameObject::GameObject(Transform2D _transform) : transform(_transform)
{
}

Transform2D &GameObject::GetTransform()
{
    return transform;
}

const Transform2D &GameObject::GetTransform() const
{
    return transform;
}
