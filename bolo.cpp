/* Faculdade de Educacao Tecnologica do Estado do Rio de Janeiro
 Programacao Orientada a Objetos e Algoritmos em C++
Prof. Emerson Lima

1. Suponha um sistema de bolos para uma panificadora online. Estamos interessados em colocar Bolos na vitrine de vendas com preco
 final de venda e descricao, adequados com os ingredientes que foram utilizados na construcao do Bolo.
Construa uma classe chamada FabricaDeBolos que deve ser responsavel por construir objetosdo tipo Bolo.
 O metodo mais importante dessa classe e constroi() que recebe informacoescomo cobertura, sabor, a quantidade de camadas, 
 o recheio que vai entre as camadas do boloe retorna um objeto do tipo Bolo.
A informacao mais importante de um Bolo a sua descricao e o seu preco de venda para serexposto na vitrine.
Construa essas classes (e outras se precisar) e mostre como voce as utilizaria para construirdiversos tipos de bolos e exibi-los na vitrine.*/

#include <iostream>
#include <string>
 
using namespace std;

class FabricaDeBolo
{
private:

    string cobertura;
    string sabor;
    int camadas;
    string recheio;

    public:
    string GetCobertura() 
    {
        return cobertura;
    }

    void SetCobertura(string umCobertura)
    {
        cobertura = umCobertura;
    }

    string GetSabor() 
    {
        return sabor;
    }

    void SetSabor(string umSabor)
    {
        sabor = umSabor;
    }

    int GetCamadas() 
    {
        return camadas;
    }

    void SetCamadas(int umCamadas)
    {
        camadas = umCamadas;
    }

    string GetRecheio() 
    {
        return recheio;
    }

    void SetRecheio(string umRecheio)
    {
        recheio = umRecheio;
    }
};

class Bolo : public FabricaDeBolo
{
private:

    float preco;

    public:
    float GetPreco() const
    {
        return preco;
    }

    void SetPreco(float umPreco)
    {
        preco = umPreco;
    }

};

class Vitrine : public Bolo
{
public:
    void mostraBolo(Bolo bolo){
       
        cout << "Sabor: " << bolo.GetSabor() << "\n";
        cout << "Cobertura: " << bolo.GetCobertura() << "\n";
        cout << "Recheio: " << bolo.GetRecheio() << "\n";
        cout << "Camadas: " << bolo.GetCamadas() << "\n";
        cout << "Preco: R$" << bolo.GetPreco() << "\n\n";
    }
};

int main(){
    Bolo b1;
    b1.SetCobertura("Chocolate");
    b1.SetRecheio("Morango");
    b1.SetSabor("Baunilha");
    b1.SetCamadas(3);
    b1.SetPreco(59.90);

    Bolo b2;
    b2.SetCobertura("Mirtilo");
    b2.SetRecheio("Chocolate Branco");
    b2.SetSabor("Chocolate");
    b2.SetCamadas(4);
    b2.SetPreco(68.90);

    Bolo b3;
    b3.SetCobertura("Mousse de Limao");
    b3.SetRecheio("Chocolate Branco");
    b3.SetSabor("Bolo Branco");
    b3.SetCamadas(6);
    b3.SetPreco(100.00);

    Bolo b4;
    b4.SetCobertura("Leite Ninho");
    b4.SetRecheio("Nutella");
    b4.SetSabor("Chocolate");
    b4.SetCamadas(3);
    b4.SetPreco(30.00);
    

    Vitrine boloLoja;
    boloLoja.mostraBolo(b1);
    boloLoja.mostraBolo(b2);
    boloLoja.mostraBolo(b3);
    boloLoja.mostraBolo(b4);

}
