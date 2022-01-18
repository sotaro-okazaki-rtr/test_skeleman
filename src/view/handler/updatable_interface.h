#ifndef UPDATABLE_INTERFACE_H
#define UPDATABLE_INTERFACE_H

template<typename E>
class IUpdatable
{
public:
    virtual ~IUpdatable() {}
    virtual void update(E event) = 0;
protected:
    IUpdatable() {}
};

#endif // UPDATABLE_INTERFACE_H
