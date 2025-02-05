# **BitDogLab-Timers-Clocks**

 **Controle de Temporizadores no RP2040 - BitDogLab**

Este projeto demonstra o uso de **temporizadores periódicos e de um disparo (One Shot)** no microcontrolador **RP2040**, utilizando a placa **BitDogLab**. Sendo implementadas duas atividades principais: um **sistema de semáforo** baseado em temporizadores repetitivos e um **sistema de acionamento de LEDs via botão** com temporização controlada.

## ** Funcionalidades Implementadas**

### ** Atividade 1: Temporizador Periódico (Semáforo) - BitDogLab-Semaforo**

- Utiliza a função **add_repeating_timer_ms()** para alternar os LEDs do semáforo (**vermelho, amarelo e verde**) a cada **3 segundos**.
- Implementação da função **repeating_timer_callback()** para controle dos estados dos LEDs.
- Impressão de mensagens na **porta serial** a cada **1 segundo**.
- Simulação e testes com **LED RGB na ferramenta BitDogLab**.

#### **Para maiores detalhes, testes, compilação e execução acesse o README da Atividade 1**

[Readme detalhado da Atividade 1](https://github.com/hsantosdias/BitDogLab-Timers-Clocks/blob/main/README_ATIVIDADE_1.md "Readme detalhado da Atividade 1")

#### **Repositorio da atividade 1**

[Respositorio exclusivo da Atividade 1](https://github.com/hsantosdias/BitDogLab-Semaforo "Respositorio exclusivo da Atividade 1")


### ** Atividade 2: Temporizador One Shot (Acionamento via Botão) - BitDogLab-OneShot-Timer**

- Utiliza a função **add_alarm_in_ms()** para acionar e desligar **três LEDs** de forma sequencial ao pressionar um botão (pushbutton).
- Intervalo de **3 segundos** entre as mudanças de estado dos LEDs.
- Implementação da função **turn_off_callback()** para desligamento programado dos LEDs.
- Controle para evitar **reativação prematura** durante a execução da rotina.
- Testado com **LED RGB e Botão A na BitDogLab**.
- **(Opcional)**: Implementação de **debounce por software** para evitar leituras incorretas do botão.

#### **Para maiores detalhes, testes, compilação e execução acesse o README da Atividade 2**

[Readme detalhado da Atividade 2](https://github.com/hsantosdias/BitDogLab-Timers-Clocks/blob/main/REAMDE_ATIVIDADE_2.md "Readme detalhado da Atividade 2")

#### **Repositorio da atividade 2**

[Repositorio exclusivo da Atividade 2](https://github.com/hsantosdias/BitDogLab-OneShot-Timer "Repositorio exclusivo da Atividade 2")

## ** Tecnologias e Conceitos Utilizados**

- Temporizadores **periódicos** e de **um disparo (One Shot)** no **RP2040**.
- Manipulação de **GPIOs para controle de LEDs e botões**.
- Uso de **interrupções** para controle eficiente de tempo.
- Integração com o **simulador Wokwi** para validação do código.
- Implementação de **mensagens seriais** para monitoramento do estado do sistema.

## ** Organização do Código - Estrutura desejada**

O código está estruturado e comentado para facilitar a compreensão e reutilização.


## ** Requisitos**

- **Placa de desenvolvimento BitDogLab (RP2040)**
- **LEDs** (Vermelho, Amarelo, Verde, Azul)
- **Resistores de 330Ω**
- **Botão (Pushbutton)** para entrada de usuário
- **VS Code com Pico SDK e Simulador Wokwi** configurados

## ** Como Usar**

Clone os repositórios, selecione compile e faça o upload do código para a placa para testar as funcionalidades!

- Este repositorio contem os codigos fonte para as duas atividades solicitadas

```bash
git clone https://github.com/seu-usuario/BitDogLab-Timers-Clocks.git

```

**Podendo ser baixadas independentementes nos seguintes repositorios**

[Respositorio exclusivo da Atividade 1](https://github.com/hsantosdias/BitDogLab-Semaforo "Respositorio exclusivo da Atividade 1")

[Repositorio exclusivo da Atividade 2](https://github.com/hsantosdias/BitDogLab-OneShot-Timer "Repositorio exclusivo da Atividade 2")
