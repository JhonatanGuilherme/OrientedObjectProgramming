#ifndef DATA_H
#define DATA_H

class Data {
  private:
    unsigned dia, mes, ano;
  public:
    Data(unsigned dia, unsigned mes, unsigned ano);
    unsigned getDia(void);
    void setDia(unsigned dia);
    unsigned getMes(void);
    void setMes(unsigned mes);
    unsigned getAno(void);
    void setAno(unsigned ano);
    void mostrarData(void);
};

#endif