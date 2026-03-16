// базовый класс
#ifndef ANIMAL_H
#define ANIMAL_H

// интерфейс животных
class Animal {
public:
    // деструктор
    virtual ~Animal() = default;

    // виртуальные методы
    virtual void breathe() = 0;
    virtual void eat() = 0;
};

#endif