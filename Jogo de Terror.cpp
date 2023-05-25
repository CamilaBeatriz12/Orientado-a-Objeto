#include <iostream>
#include <string>
#include <vector>

class IniciarGame{ //tela inicial
public:
  void TelaInicial(){
    system("cls");

    cout << "\n  CASA TRIBRUXO - APUCARANA EVIL 2.0\n\n" << endl;

    cout << "         @@@@@@@@@@@@@\n" << endl;
    cout << "      @@@@@@@@@@@@@@@@@@@\n" << endl;
    cout << "    @@@@@@@@@@@@@@@@@@@@@@@\n" << endl;
    cout << "   @@@@@@@@@@@@@@@@@@@@@@@@@\n" << endl;
    cout << "  @@@@@@@@@@@@@@@@@@@@@@@@@@@\n" << endl;
    cout << " @@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n" << endl;
    cout << " @@@@@@@@@ \\    @@@@@@@  @@@@@\n" << endl;
    cout << " @@@@@@@@  _\\     @@@@@   @@@@\n" << endl;
    cout << " @@@  @@   \\        @@   @@@@\n" << endl;
    cout << " @@@        \\              @@\n" << endl;
    cout << "  @@  .#####.      .#####. @\n" << endl;
    cout << "   @ #       #    #       #\n" << endl;
    cout << "    #         #__#         #\n" << endl;
    cout << "    #         #  #         #\n" << endl;
    cout << "     #       #    #       #\n" << endl;
    cout << "      .#####.      .#####.\n\n\n" << endl;

    pausarTela();
  }

  void pausarTela(){
    cout << "\n Tecle ENTER para continuar..." << endl;

    char pausar;

    cin >> pausar;
  }
};

class MenuPrincipal(){ //menu para começar a partida
  void Menu(){
    system("cls");

    cout << "\n   #MENU PRINCIPAL# \n\n" << endl;

    cout << "           //////\n" << endl;
    cout << "          //////\n" << endl;
    cout << "         //////\n" << endl;
    cout << "        //////\n" << endl;
    cout << "       /////////\n" << endl;
    cout << "      /////////\n" << endl;
    cout << "          ////\n" << endl;
    cout << "         ///\n" << endl;
    cout << "        //\n" << endl;
    cout << "       //\n" << endl;
    cout << "      /\n\n" << endl;


    int opcao;

    cout << "\n 1 - Nova Partida\n" << endl;
    cout << "\n 2 - Sair\n" << endl;
    cout << "->" << endl;

    cin >> opcao;

    if(opcao == 1){
      system("cls");

      NovaPartida();
    }

    else if(opcao == 2){
      system("cls");

      exit(0);
    }

    else{
      cout << "\n Opcao Invalida!" << endl;
    }
  }

  void NovaPartida(){
    cout << "\n Caros alunos, eu gostaria de dar um aviso, este castelo nao sera lar so de voces este semestre, mas o lar de convidados muito especiais!" << endl;
    cout << "\n Sabem... Hogwarts foi escolhida para sediar um evento lendario o Torneio Tribruxo" << endl;
    cout << "\n Para aqueles que nao sabem, o Torneio Tribruxo reune 3 escolas para uma serie de competicoes magicas, de cada uma apenas um aluno e escolhido para competir" << endl;
    cout << "\n E que fique claro, o aluno escolhido estara SOZINHO, e acreditem quando eu digo que essas competicoes nao sao para covardes!!!" << endl;
    cout << "\n\n\n Harry foi escolhido pela escola de magia e bruxaria de Hogwarts, e tera que enfrentar a primeira prova" << endl;
    cout << "\n Ele estara na Mansao dos Malfoy e iniciara a competicao na sala, ele precisa achar o soro de Naguini, e traze-lo ao ponto de partida, porém montros o esperao" << endl;
    cout << "\n Ache os itens pela casa, e traga o soro, não manche a reputacao dos Potters!" << endl;
  }
};

class Ambiente{
private:
  int comodo;
  bool monstro;
  bool soro;
  bool mun;
  bool arminha;

public:
  void setComodo(int comodo){
    this -> comodo = comodo;
  }

  int getComodo(){
    return comodo;
  }

  void setMonstro(bool monstro){
    this -> monstro = monstro;
  }

  bool getMontro(){
    return monstro;
  }

  void setSoro(bool soro){
    this -> soro = soro;
  }

  string getSoro(){
    return soro;
  }

  void setMun(bool mun){
    this -> mun = mun;
  }

  bool getMun(){
    return mun;
  }

  void setArminha(bool arminha){
    this -> arminha = arminha;
  }

  bool getArminha(){
    return arminha;
  }

  virtual void setConexoesComodo(int comodo) = 0;

  void SorteioMonstros(){
    int a;

    vector<int>Monstros;
    Monstros.push_back(1);
    Monstros.push_back(2);
    Monstros.push_back(3);
    Monstros.push_back(4);
    Monstros.push_back(5);
    return Monstros;

    vector<int>Comodos;
    Comodos.push_back(1);
    Comodos.push_back(2);
    Comodos.push_back(3);
    Comodos.push_back(4);
    Comodos.push_back(5);
    Comodos.push_back(6);
    Comodos.push_back(7);
    Comodos.push_back(8);
    Comodos.push_back(9);
    return Comodos;

    for(int i = 0; i < Monstros.size(); i++){
      do{
        srand(time(NULL));

        a[i] = rand() % 9;
      }while(a[i] == 4);

      Monstros.at[i] = Comodos.at[a[i]];
    }
  }

  void SorteioItens(){
    int a;

    vector<int>Itens;
    Itens.push_back(1);
    Itens.push_back(2);
    Itens.push_back(3);
    Itens.push_back(4);
    Itens.push_back(5);
    return Itens;

    vector<int>Comodos;
    Comodos.push_back(1);
    Comodos.push_back(2);
    Comodos.push_back(3);
    Comodos.push_back(4);
    Comodos.push_back(5);
    Comodos.push_back(6);
    Comodos.push_back(7);
    Comodos.push_back(8);
    Comodos.push_back(9);
    return Comodos;

    for(int i = 0; i < Itens.size(); i++){
      do{
        srand(time(NULL));

        a[i] = rand() % 9;
      }while(a[i] == 4);

      Itens.at[i] = Comodos.at[a[i]];
    }
  }
};

class Comodos: public Ambiente{
public:
  Comodos(){
    setComodo(4);
  }

  void setConexoesComodo(4) override{
    vector<int>Sala;
    Sala.push_back(1);
    Sala.push_back(2);
    Sala.push_back(3);
    return Sala;
  }

  void setConexoesComodo(1) override{
    vector<int>Laboratorio;
    Laboratorio.push_back("4");
    return Laboratorio;
  }

  void setConexoesComodo(2) override{
    vector<int>Cozinha;
    Cozinha.push_back("4");
    return Cozinha;
  }

  void setConexoesComodo(3) override{
    vector<int>Corredor;
    Corredor.push_back("5");
    Corredor.push_back("6");
    Corredor.push_back("7");
    Corredor.push_back("8");
    return Corredor;
  }

  void setConexoesComodo(5) override{
    vector<int>Quarto_1;
    Quarto_1.push_back("3");
    return Quarto_1;
  }

  void setConexoesComodo(6) override{
    vector<int>Quarto_2;
    Quarto_2.push_back("3");
    return Quarto_2;
  }

  void setConexoesComodo(7) override{
    vector<int>Banheiro_1;
    Banheiro_1.push_back("3");
    return Banheiro_1;
  }

  void setConexoesComodo(8) override{
    vector<int>Quarto_3;
    Quarto_3.push_back("3");
    Quarto_3.push_back("9");
    return Quarto_3;
  }

  void setConexoesComodo(9) override{
    vector<int>Banheiro_2;
    Banheiro_2.push_back("8");
    return Banheiro_2;
  }

  void movimentar(){
    int opcao;

    if(getComodo() == 4){
      cout << "\n Voce se encontra na Sala" << endl;
      cout << "\n Deseja ir para: " << endl;
      cout << "\n 1 - Laboratorio, 2 - Cozinha, 3 - Corredor" << endl;
      if(opcao == 1 && setConexoesComodo(4) = 1){
        getComodo() == 1;
      }
      else if(opcao == 2 && setConexoesComodo(4) = 2){
        getComodo() == 2;
      }
      else if(opcao == 3 && setConexoesComodo(4) = 3){
        getComodo() == 3;
      }
      else{
        cout << "\n Opcao inválida!" << endl;
      }

    }

    if(getComodo() == 1){
      cout << "\n Voce se encontra no Laboratorio" << endl;
      ... //necessita fazer a pesquisa pelo vector se tem monstro ou itens
      cout << "\n Deseja 1 - Procurar, 2 - Andar, 3 - Atacar?" << endl;
      cout << "\n Deseja ir para: " << endl;
      cout << "\n 4 - Sala" << endl;
      if(opcao == 4 && setConexoesComodo(1) = 4){
        getComodo() == 4;
      }
      else{
        cout << "\n Opcao inválida!" << endl;
      }
    }

    if(getComodo() == 2){
      cout << "\n Voce se encontra na Cozinha" << endl;
      ...
      cout << "\n Deseja 1 - Procurar, 2 - Andar, 3 - Atacar?" << endl;
      cout << "\n Deseja ir para: " << endl;
      cout << "\n 4 - Sala" << endl;
      if(opcao == 4 && setConexoesComodo(2) = 4){
        getComodo() == 4;
      }
      else{
        cout << "\n Opcao inválida!" << endl;
      }
    }

    if(getComodo() == 3){
      cout << "\n Voce se encontra no Corredor" << endl;
      ...
      cout << "\n Deseja 1 - Procurar, 2 - Andar, 3 - Atacar?" << endl;
      cout << "\n Deseja ir para: " << endl;
      cout << "\n 5 - Quarto 1, 6 - Quarto 2, 7 - Banheiro 1, 8 - Quarto 3" << endl;
      if(opcao == 5 && setConexoesComodo(3) = 5){
        getComodo() == 5;
      }
      else if(opcao == 6 && setConexoesComodo(3) = 6){
        getComodo() == 6;
      }
      else if(opcao == 7 && setConexoesComodo(3) = 7){
        getComodo() == 7;
      }
      else if(opcao == 8 && setConexoesComodo(3) = 8){
        getComodo() == 8;
      }
      else{
        cout << "\n Opcao inválida!" << endl;
      }
    }

    if(getComodo() == 5){
      cout << "\n Voce se encontra na Quarto 1" << endl;
      ...
      cout << "\n Deseja 1 - Procurar, 2 - Andar, 3 - Atacar?" << endl;
      cout << "\n Deseja ir para: " << endl;
      cout << "\n 3 - Corredor" << endl;
      if(opcao == 3 && setConexoesComodo(5) = 3){
        getComodo() == 3;
      }
      else{
        cout << "\n Opcao inválida!" << endl;
      }
    }

    if(getComodo() == 6){
      cout << "\n Voce se encontra na Quarto 2" << endl;
      ...
      cout << "\n Deseja 1 - Procurar, 2 - Andar, 3 - Atacar?" << endl;
      cout << "\n Deseja ir para: " << endl;
      cout << "\n 3 - Corredor" << endl;
      if(opcao == 3 && setConexoesComodo(6) = 3){
        getComodo() == 3;
      }
      else{
        cout << "\n Opcao inválida!" << endl;
      }
    }

    if(getComodo() == 7){
      cout << "\n Voce se encontra na Banheiro 1" << endl;
      ...
      cout << "\n Deseja 1 - Procurar, 2 - Andar, 3 - Atacar?" << endl;
      cout << "\n Deseja ir para: " << endl;
      cout << "\n 3 - Corredor" << endl;
      if(opcao == 3 && setConexoesComodo(7) = 3){
        getComodo() == 3;
      }
      else{
        cout << "\n Opcao inválida!" << endl;
      }
    }

    if(getComodo() == 8){
      cout << "\n Voce se encontra na Quarto 3" << endl;
      ...
      cout << "\n Deseja 1 - Procurar, 2 - Andar, 3 - Atacar?" << endl;
      cout << "\n Deseja ir para: " << endl;
      cout << "\n 3 - Corredor, 9 - Banheiro 2" << endl;
      if(opcao == 3 && setConexoesComodo(8) = 3){
        getComodo() == 3;
      }
      else if(opcao == 9 && setConexoesComodo(8) = 9){
        getComodo() == 9;
      }
      else{
        cout << "\n Opcao inválida!" << endl;
      }
    }

    if(getComodo() == 9){
      cout << "\n Voce se encontra na Banheiro 2" << endl;
      ...
      cout << "\n Deseja 1 - Procurar, 2 - Andar, 3 - Atacar?" << endl;
      cout << "\n Deseja ir para: " << endl;
      cout << "\n 8 - Quarto 3" << endl;
      if(opcao == 8 && setConexoesComodo(9) = 8){
        getComodo() == 8;
      }
      else{
        cout << "\n Opcao inválida!" << endl;
      }
    }
};

class AbstractMunicao{
public:
  int dano;

  void setDano(int dano){
    this -> dano = dano;
  }

  void getDano(){
    return dano;
  }

  virtual void getInfo() = 0;
};

class Mun_Bereta: public AbstractMunicao{
public:
  Mun_Bereta(){
    setDano(1);
  }

  void getInfo() override{
    cout << "\n 2 unidades de munição de Bereta" << endl;
  }
};

class Mun_Espingarda: public AbstractMunicao{
public:
  Mun_Espingarda(){
    setDano(2);
  }

  void getInfo() override{
    cout << "\n 2 unidades de munição de Espingarda" << endl;
  }
};

class AbstractFactoryArmas{
public:
  virtal AbstractMunicao *CreateMunicao() const = 0;
};

class ConcreteFactoryArmas1: public AbstractFactoryArmas{
  AbstractMunicao *CreateMunicao() const override{
    return new Mun_Bereta();
  }
};

class ConcreteFactoryArmas2: public AbstractFactoryArmas{
  AbstractMunicao *CreateMunicao() const override{
    return new Mun_Espingarda();
  }
};

void Cliente(AbstractFactoryArmas &fact){
  fact.CreateMunicao() -> getInfo();
}

class Acoes{
public:
  void Atacar(){
    virtual void atacar() = 0;
  }

  void Andar(){
    //...
  }

  void Procurar(){
    //...
  }
};

class VidaHarry: public Ambiente, public Comodos, public AbstractFactoryArmas{
private:
  int vida;

  static VidaHarry *instance;

  VidaHarry(){
    setVida(2);
    setComodo(4);
    setSoro(false);
    setMun(false);
    setArminha(false);
  }

public:
  static VidaHarry *getInstance();

  Comodos *a;

  a -> movimentar();

  void setVida(int vida){
    this -> vida = vida;
  }

  int getVida(){
    return vida;
  }

  int getPerdeVida(){
    return vida--;
  }

  void finalJogo(){
    if(vida <= 0){
      cout << "\n       #GAME OVER#  \n\n\n\n " << endl;

    cout << "                    ,____\n" << endl;
    cout << "                    |---.\\\n" << endl;
    cout << "                    |---. \\\n" << endl;
    cout << "            ___     ||    `\n" << endl;
    cout << "           / .-\\  ./=)\n" << endl;
    cout << "          |  |\"|_/\\/||\n" << endl;
    cout << "          ;  |-;|  /||\n" << endl;
    cout << "         / \\_| |/ / ||\n" << endl;
    cout << "        /      \\_/  ||\n" << endl;
    cout << "        |   /  |    ||\n" << endl;
    cout << "        /   \\ _/    ||\n" << endl;
    cout << "       /--._/  \\    ||\n" << endl;
    cout << "       `/|)    |    ||\n" << endl;
    cout << "       .'      |    ||\n" << endl;
    cout << "      /         \\   ||\n" << endl;
    cout << "     (_.-.__.__./   ||\n\n" << endl;

    cout << " Você foi capturado pelo inimigo!\n\n" << endl;
    }
  }
};

VidaHarry *VidaHarry::instance = NULL;

VidaHarry *VidaHarry::getInstance(){
  if(!instance){
    instance = new VidaHarry();
  }
  return instance;
}

class VidaMonstros: public VidaHarry{
public:
  VidaMonstros{
    if(Monstros.at[0] || Monstros.at[1] ||Monstros.at[2]){
      setVida(1);
    }
    else if(Monstros.at[3] || Monstros.at[4]){
      setVida(2);
    }
  }
};

int main(){

  IniciarGame * a;
  a -> TelaInicial();
  a -> pausarTela();

  MenuPrincipal *b;
  b -> Menu();
  b -> NovaPartida();

  Ambiente *c;
  c -> SorteioMonstros();
  c -> SorteioItens();

  Comodos *d;
  d -> setConexoesComodo();

  VidaHarry *e;

  e -> finalJogo();

  return 0;
}
