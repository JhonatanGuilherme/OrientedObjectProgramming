#include <iostream>
#include "Cupom.h"

using namespace std;

Cupom::Cupom(string id, string descricao, int quantidade, float preco) {
  this->id = id;
  this->descricao = descricao;
  this->quantidade = quantidade >= 0 ? quantidade : 0;
  this->precoItem = preco >= 0 ? preco : 0;
}

string Cupom::getId(void) { return this->id; }

void Cupom::setId(string id) { this->id = id; }

string Cupom::getDescricao(void) { return this->descricao; }

void Cupom::setDescricao(string descricao) { this->descricao = descricao; }

int Cupom::getQuantidade(void) { return this->quantidade; }

void Cupom::setQuantidade(int quantidade) {
  this->quantidade = quantidade >= 0 ? quantidade : 0;
}

float Cupom::getPreco(void) { return this->precoItem; }

void Cupom::setPreco(float preco) {
  this->precoItem = preco >= 0 ? preco : 0;
}

double Cupom::calculaCupom(void) {
  return this->precoItem * this->quantidade;
}
