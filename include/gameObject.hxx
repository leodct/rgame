#ifndef GAMEOBJECT_H
#define GAMEOBJECT_H

#include "transform.hxx"

/**
 * @brief ## Game Object parent class
 * @brief Pure virtual class to provide generic methods to its child classes.
 */
class GameObject{
protected:
    Transform2D transform; // Position, scale and rotation data.
public:
    /**
     * @brief Create a new `GameObject` object with default parameters.
     * @param _transform New object's `transform` data. Defines position, rotation and scale.
     */
    GameObject(Transform2D _transform = {});
    /**
     * @brief Default virtual destructor.
     */
    virtual ~GameObject() = default;

    /**
     * @brief Get a @b constant reference to the object's `transform` data.
     * @return A @b constant reference to the object's `transform` data.
     */
    const Transform2D &GetTransform() const;
    /**
     * @brief Get a reference to the object's `transform` data.
     * @return A @b non-constant reference to the object's `transform` data.
     */
    Transform2D       &GetTransform();

    /**
     * @brief Pure virtual function to be overriden in child classes.
     */
    virtual void Draw() const = 0;
    /**
     * @brief Pure virtual function to be overriden in child classes.
     */
    virtual void Update()     = 0;
};
#endif