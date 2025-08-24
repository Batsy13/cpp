#include <iostream>

class Animal {
  public: void fale() { std::cout << "... "; }
};
class Cao : public Animal {
  public: void fale() { std::cout << "au au "; }
};
class Gato : public Animal {
  public: virtual void fale() { std::cout << "miau "; }
};
class GatoPersa : public Gato {
  public: void fale() { std::cout << "miauuuu "; }
};
class Tigre : public Gato {
  public: void fale() { std::cout << "rrrr "; }
};
int main() {
  Gato *gato = new GatoPersa();
  gato->fale();
  Animal *cao = new Cao();
  cao->fale();
  Gato *tigre = new Tigre();
  tigre->fale();
}