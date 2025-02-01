# **BitDogLab-Timers-Clocks**  
 **Controle de Temporizadores no RP2040 - BitDogLab**  

Este projeto demonstra o uso de **temporizadores periódicos e de um disparo (One Shot)** no microcontrolador **RP2040**, utilizando a placa **BitDogLab**. Sendo implementadas duas atividades principais: um **sistema de semáforo** baseado em temporizadores repetitivos e um **sistema de acionamento de LEDs via botão** com temporização controlada.  

## ** Funcionalidades Implementadas**  

### ** Atividade 1: Temporizador Periódico (Semáforo)**  
- Utiliza a função **add_repeating_timer_ms()** para alternar os LEDs do semáforo (**vermelho, amarelo e verde**) a cada **3 segundos**.  
- Implementação da função **repeating_timer_callback()** para controle dos estados dos LEDs.  
- Impressão de mensagens na **porta serial** a cada **1 segundo**.  
- Simulação e testes com **LED RGB na ferramenta BitDogLab**.  

### ** Atividade 2: Temporizador One Shot (Acionamento via Botão)**  
- Utiliza a função **add_alarm_in_ms()** para acionar e desligar **três LEDs** de forma sequencial ao pressionar um botão (pushbutton).  
- Intervalo de **3 segundos** entre as mudanças de estado dos LEDs.  
- Implementação da função **turn_off_callback()** para desligamento programado dos LEDs.  
- Controle para evitar **reativação prematura** durante a execução da rotina.  
- Testado com **LED RGB e Botão A na BitDogLab**.  
- **(Opcional)**: Implementação de **debounce por software** para evitar leituras incorretas do botão.  

## ** Tecnologias e Conceitos Utilizados**  
- Temporizadores **periódicos** e de **um disparo (One Shot)** no **RP2040**.  
- Manipulação de **GPIOs para controle de LEDs e botões**.  
- Uso de **interrupções** para controle eficiente de tempo.  
- Integração com o **simulador Wokwi** para validação do código.  
- Implementação de **mensagens seriais** para monitoramento do estado do sistema.  

## ** Organização do Código - Estrutura desejada**  
O código está estruturado e comentado para facilitar a compreensão e reutilização.  

 **`src/`** → Código-fonte das atividades  
 **`docs/`** → Documentação complementar  
 **`tests/`** → Testes para validação das funcionalidades  

## ** Demonstração**  
Vídeos demonstrativos do funcionamento do projeto:  


## ** Requisitos**  
- **Placa de desenvolvimento BitDogLab (RP2040)**  
- **LEDs** (Vermelho, Amarelo, Verde, Azul)  
- **Resistores de 330Ω**  
- **Botão (Pushbutton)** para entrada de usuário  
- **VS Code com Pico SDK e Simulador Wokwi** configurados  

## ** Como Usar**  
Clone o repositório, compile e faça o upload do código para a placa para testar as funcionalidades!  
```bash
git clone https://github.com/seu-usuario/BitDogLab-Timers-Clocks.git
