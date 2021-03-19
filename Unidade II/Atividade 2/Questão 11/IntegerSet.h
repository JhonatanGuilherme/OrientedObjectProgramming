#ifndef INTEGERSET_H
#define INTEGERSET_H

class IntegerSet {
  private:
    friend IntegerSet unionOfSets(IntegerSet i1, IntegerSet i2);
    friend IntegerSet intersectionOfSets(IntegerSet i1, IntegerSet i2);
    int *array = new int[100];
  public:
    IntegerSet(void);
    IntegerSet(const int (&array)[], const int size);
    void insertElement(unsigned int element);
    void deleteElement(unsigned int element);
    void print(void) const;
};

#endif //INTEGERSET_H