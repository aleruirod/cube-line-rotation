#ifndef SCENE_H
#define SCENE_H

class Scene
{
public:
    /**
      Load textures, initialize shaders, etc.
      */
    virtual void initScene() = 0;

    /**
      This is called prior to every frame.  Use this
      to update your animation.
      */
    virtual void update( float t ) = 0;

    /**
      Draw your scene.
      */
    virtual void render() = 0;

    /**
      Called when screen is resized
      */
    virtual void resize(int, int) = 0;

    /**
     * this method affects the view of the model
     * @brief updateView
     * @param eX
     * @param eY
     * @param eZ
     * @param directX
     * @param directY
     * @param directZ
     */
    virtual void updateView(float eX, float eY, float eZ, float directX, float directY, float directZ) = 0;

    /**
     * This method affects the rotation of the model.
     * @brief rotateModel
     * @param bX
     * @param bY
     * @param bZ
     * @param dX
     * @param dY
     * @param dZ
     * @param phi
     */
    virtual void rotateModel(float bX, float bY, float bZ, float dX, float dY, float dZ, float phi) = 0;

    virtual void resetModel() = 0;


};

#endif // SCENE_H
