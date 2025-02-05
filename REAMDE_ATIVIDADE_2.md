# **BitDogLab-OneShot-Timer**

**Tarefa 2 - Temporizador One-Shot (Botão e LEDs)**

## Introdução

Este projeto demonstra o uso de um **temporizador de um disparo (`add_alarm_in_ms()`)** no **microcontrolador RP2040**, utilizando a placa **BitDogLab**. O objetivo é desenvolver um sistema no qual **três LEDs (Azul, Vermelho e Verde)** são acionados ao pressionar um botão e desligados progressivamente a cada **3 segundos**.

A aplicação utiliza um **temporizador de alarme** para garantir que cada LED desligue em sequência após o intervalo especificado.

---

## Objetivo do Projeto

O principal objetivo deste projeto é demonstrar o uso do temporizador de um disparo **One-Shot Timer** do **Pico SDK**, acionado por um botão, para desligamento progressivo de LEDs.

O sistema segue a seguinte lógica:
- O botão é pressionado para ativar o sistema.
- Os **três LEDs** são ligados simultaneamente.
- O **LED Azul** desliga após **3 segundos**.
- O **LED Vermelho** desliga após **6 segundos**.
- O **LED Verde** desliga após **9 segundos**.
- O ciclo pode ser reiniciado pressionando novamente o botão.

Esse projeto é útil para demonstrar conceitos de **temporização com alarme único, interrupções GPIO, debounce de botão** e **sequência de eventos em sistemas embarcados**.

---

## Componentes Utilizados

- **Microcontrolador:** Raspberry Pi Pico W (BitDogLab)
- **LEDs:** Azul, Vermelho e Verde
- **Resistores:** 330Ω para cada LED
- **Botão (Pushbutton):** Para ativação manual
- **Software:** VS Code + Pico SDK + Simulador Wokwi

---

## Bibliotecas Utilizadas e Sua Importância

O código deste projeto utiliza as seguintes bibliotecas essenciais para o funcionamento correto no Raspberry Pi Pico W:

### `#include <stdio.h>`
A biblioteca padrão de entrada e saída do C. Utilizada para permitir a comunicação serial com o computador através da função `printf()`, facilitando a depuração e monitoramento do sistema.

### `#include "pico/stdlib.h"`
A biblioteca padrão do SDK do Raspberry Pi Pico. Contém funções essenciais para manipulação de **GPIOs**, **delays (`sleep_ms()`)**, configuração de hardware e comunicação serial.

### `#include "hardware/timer.h"`
Biblioteca fundamental para a implementação do **temporizador One-Shot (`add_alarm_in_ms()`)**, que gerencia o tempo de desligamento dos LEDs.

### `#include "hardware/gpio.h"`
Fornece suporte para **manipulação de GPIOs**, permitindo a leitura do botão e o acionamento dos LEDs.

---

## **Funcionalidades Implementadas**

- **Botão inicia a ativação dos LEDs.**
- **LEDs desligam em sequência a cada 3 segundos.**
- **Sistema evita novas ativações antes do fim do ciclo.**
- **Debounce de 200ms no botão para evitar leituras erradas.**
- **Mensagens na porta serial para monitoramento do sistema.**
- **Simulação completa no Wokwi para validação.**

### Simulador para a prototipação do projeto

[Simulador no WOKWI deste projeto](https://wokwi.com/projects/421920891282537473 "Simulador no WOKWI deste projeto")

---

## **Fluxograma do Projeto**

### **Lógica do Sistema One-Shot Timer**
O seguinte fluxo representa o funcionamento do código:

[![Fluxo do Sistema One-Shot Timer](imgs/fluxograma_principal.png "Fluxo do Sistema One-Shot Timer")](https://github.com/hsantosdias/BitDogLab-OneShot-Timer/blob/main/imgs/fluxograma_principal.png?raw=true "Fluxo do Sistema One-Shot Timer")


### Fluxograma do Sistema One-Shot Timer

1. **Início**
   - Inicializa a comunicação serial.
   - Configura os GPIOs do botão e dos LEDs.

2. **Aguardando Interação**
   - O sistema aguarda o pressionamento do botão.
   - Se o botão for pressionado, ativa os LEDs.

3. **Ciclo de Desligamento**
   - Após **3 segundos**, o LED azul é desligado.
   - Após **6 segundos**, o LED vermelho é desligado.
   - Após **9 segundos**, o LED verde é desligado.

4. **Reinício**
   - O sistema volta a aguardar um novo pressionamento do botão.


---

## **Organização do Código**

| Diretório / Arquivo              | Descrição                                       |
|----------------------------------|-------------------------------------------------|
| **BitDogLab-OneShot-Timer/**     | Diretório raiz do projeto                      |
| ├── **.vscode/**                 | Configurações do VS Code                        |
| ├── **docs/**                    | Documentação e diagramas                        |
| │   ├── diagram.json             | Representação do fluxograma                    |
| │   ├── README.md                | Documentação do projeto                        |
| ├── **src/**                     | Código-fonte do projeto                        |
| │   ├── BitDogLab-OneShot-Timer.c| Código principal                               |
| │   ├── CMakeLists.txt           | Configuração do CMake                          |
| ├── **build/**                   | Diretório para compilação                      |
| ├── **imgs/**                     | Imagens e diagramas                            |
| │   ├── fluxograma.png           | Imagem do fluxograma do projeto               |
| ├── **libs/**                     | Dependências adicionais, se houver            |
| ├── pico_sdk_import.cmake        | Arquivo para importar o SDK do Pico           |
| ├── .gitignore                   | Arquivo para ignorar arquivos no Git          |
| ├── wokwi-project.txt            | Configuração do projeto no Wokwi              |
| ├── wokwi.toml                   | Arquivo de configuração do Wokwi              |

O código está bem **comentado e estruturado** para facilitar modificações futuras.

---

## **Demonstração**

**Vídeo demonstrativo do professor:**  

[Simulação sugerida no Wokwi](https://www.dropbox.com/scl/fi/6w37qxzdq4ytljqvqzr6h/2025-01-25-17-48-11.mkv?rlkey=yjj1iqcfkx444xigglaxqw81e&e=1&st=9q2qz7vw&dl=0 "Simulação sugerida no Wokwi")

---

## **Atividades de Teste Realizadas**

Durante o desenvolvimento, foram realizados diversos testes para validar a funcionalidade do sistema.

### **1. Teste de Acionamento do Botão e LEDs**
**Objetivo:** Verificar se o botão aciona corretamente os LEDs.  
**Resultado:** LEDs ligam corretamente ao pressionar o botão.

### **2. Teste de Temporização do Alarme**
**Objetivo:** Garantir que os LEDs desligam em sequência, a cada 3 segundos.  
**Resultado:** O temporizador funciona corretamente, desligando cada LED no tempo esperado.

### **3. Teste de Bloqueio de Nova Ativação**
**Objetivo:** Impedir que o botão reinicie o ciclo antes do término.  
**Resultado:** O código impede novas ativações enquanto os LEDs ainda estão ligados.

### **4. Teste de Debounce no Botão**
**Objetivo:** Evitar acionamentos duplos por pulsos curtos.  
**Resultado:** O debounce de 200ms foi implementado e está funcionando corretamente.

---

## **Requisitos**

- **Placa BitDogLab (RP2040)**
- **LEDs (Azul, Vermelho, Verde)**
- **Resistores de 330Ω para cada LED**
- **Botão (Pushbutton)**
- **VS Code + Pico SDK + Wokwi configurados**

---

## **Como Usar**

Clone o repositório, compile e faça o upload do código para a placa para testar as funcionalidades!

```bash
git clone https://github.com/hsantosdias/BitDogLab-OneShot-Timer.git
