
# Identificação

* Nome: Raí de Medeiros Cunha

* Matrícula: 20210063834
  
# Compilação  

Compilação: Abra o terminal ou prompt de comando no diretório onde seus arquivos estão localizados e use um comando de compilação. Se você estiver usando o GCC, o comando pode ser assim: g++ -Wall -o nome_do_programa main.cpp Automovel.cpp Caminhao.cpp Concessionaria.cpp Moto.cpp Veiculo.cpp. Isso criará um arquivo executável chamado **nome_do_programa** (substitua pelo nome desejado).

Execução:
Após a compilação bem-sucedida, execute o programa digitando: ./nome_do_programa

Roteiro de Entradas:
Durante a execução, você será solicitado a inserir comandos. Aqui está um exemplo de um possível roteiro de entradas para testar as funcionalidades:

create-concessionaria
NomeDaConcessionaria
CNPJDaConcessionaria

add-car
NomeDaConcessionaria
MarcaDoCarro
123456789 (número do chassi)
50000.0 (preço)
2022 (ano de fabricação)
gasolina (tipo de motor)

search-vehicle
123456789 (número do chassi)

add-truck
NomeDaConcessionaria
MarcaDoCaminhao
987654321 (número do chassi)
80000.0 (preço)
2021 (ano de fabricação)
comum (tipo de carga)

remove-vehicle
987654321 (número do chassi)

quit

# Limitações

O código não esta lida com exceções. Em situações de erro, o código pode não fornecer feedback adequado ou se recuperar corretamente. Não há verificações robustas para a entrada do usuário. Isso pode resultar em comportamento inesperado se o usuário fornecer entradas inválidas. Poderia ser implementado uso de ponteiros inteligentes. Por falta de tempo não foi implementado a funcionalidade raise-concessionaria
   
# Autoavaliação

- Modelagem e implementação das classes Concessionária, Veículo, Automóvel, Moto, Caminhão | **10 / 10**
  - 0: sem modelagem e implementação de classes
  - 5: apenas algumas classes modeladas e implementadas; ausência de herança
  - 10: modelagem e implementação completa com uso de herança
  
- Implementação e uso do comando `create-concessionaria` | **10 / 10**
  - 0: não cria concessionária via linha de comando 
  - 5: permite criar apenas uma concessionária
  - 10: permite criar mais do que uma concessionária
  
- Implementação e uso dos comandos para adicionar veículos `add-car/add-bike/add-truck` | **10 / 10**
  - 0: não permite criar veículos via linha de comando
  - 5: permite criar apenas um ou outro veículo em uma única concessionária
  - 10: permite criar qualquer tipo de veículo em qualquer uma das concessionárias disponíveis

- Não permitir adicionar um veículo que já tenha sido anteriormente adicionado | **10 / 10**
  - 0: não realiza o teste
  - 10: realiza o teste e indica o erro  

- Implementação e uso do comando para remover veículos `remove-vehicle` | **10 / 10**
  - 0: comando não implementado
  - 10: comando implementado e funcional

- Implementação e uso do comando para busca de veículos `search-vehicle` | **15 / 15 - Bônus: ...**
  - 0: não implementado
  - 15: implementado e funcional
  - bonus +10: implementado com estratégia de busca diferente da busca exaustiva
  - bonus +10: uso de métodos virtuais para impressão na tela
  - bonus +10: uso de sobrecarga de operadores para impressão na tela

- Implementação e uso do comando `list-concessionaria` | **10 / 10 - Bônus: ...**
  - 0: não implementado
  - 10: implementado e funcional   
  - bonus +10: uso de sobrecarga de operadores para impressão na tela

- Implementação e uso do comando `raise-price` | **0 / 10 - Bônus: ...**
  - 0: não implementado
  - 10: implementado e funcional 
  - bonus +10: implementado com uso de método virtual

- Implementação e uso do comando `save-concessionaria` e `load-concessionaria` | **30 / 30**
  - 0: não implementado
  - 15: ambos os comandos implementados e funcionais
  
- Implementação eficiente através do uso de referencias e contêineres da STL | **5 / 10**
  - 0: não usou contêiner da STL nem fez uso eficiente dos recursos computacionais
  - 5: usou contêiner da STL mas não otimizou uso dos recursos computacionais
  - 10: usou contêiner da STL junto a algoritmos e práticas de bom uso de recursos computacionais
  
- Organização do código em src, include, data | **5 / 5**
  - 0: não organizou o código
  - 5: organizou o código 
  
- Documentação do código | **5 / 5**
  - 0: não documentou o código
  - 5: documentou o código 
  
- Implementação e documentação de arquivos e procedimentos de compilação e teste | **15 / 15**
  - 0: não implementou arquivos e procedimentos de compilação e teste
  - 5: implementou alguns arquivos e procedimentos de compilação e teste (com alguma documentação) 
  - 15: Ampla implementação e documentação de arquivos e procedimentos de compilação e teste (com exemplos)
 
 # Total
 
 **135 / 150 ** pontos (sem bônus)
 
 **... / 200 ** pontos (com bônus)
