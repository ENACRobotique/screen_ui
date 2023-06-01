#ifndef MODEL_HPP
#define MODEL_HPP

class ModelListener;

class Model
{
public:
    Model();

    void bind(ModelListener* listener)
    {
        modelListener = listener;
    }

    void setTirette(bool t) {tirette = t;}

    void tick();
protected:
    ModelListener* modelListener;

    bool tirette;
};

#endif // MODEL_HPP
