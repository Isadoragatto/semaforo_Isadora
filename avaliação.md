### Relatório 
Iniciei  posicionando os LEDs vermelho, amarelo e verde na protoboard. A perna negativa de cada LED foi conectada à linha de aterramento (GND) da protoboard, usando jumpers amarelos e preto. A perna positiva de cada LED foi conectada a jumpers de cores específicas para cada LED: roxo para o pino 3 (LED vermelho), laranja para o pino 9 (LED amarelo) e vermelho para o pino 11 (LED verde) no Arduino. Em cada perna positiva, coloquei um resistor  para limitar a corrente e proteger os LEDs.

Além da montagem, minha funcionalidade extra foi que  desenvolvi um código com funções para controlar as fases do semáforo. Inicialmente, defini os pinos dos LEDs com `#define` para facilitar o gerenciamento do código. A função `configurarPinos()` define cada pino como saída, permitindo o controle dos LEDs. Cada fase do semáforo é representada por uma função específica: `faseVermelho()` acende o LED vermelho por 6 segundos, `faseAmarelo()` acende o LED amarelo por 2 segundos, e `faseVerde()` acende o LED verde por 4 segundos. No `loop()`, essas funções são chamadas em sequência, criando o ciclo completo do semáforo.

### Avaliador: Davi Basã
| Critério                                                                                                 | Contempla (Pontos) | Contempla Parcialmente (Pontos) | Não Contempla (Pontos) | Nota atribuída | Observações do Avaliador |
|---------------------------------------------------------------------------------------------------------|--------------------|----------------------------------|--------------------------|----------------|--------------------------|
| Montagem física com cores corretas, boa disposição dos fios e uso adequado de resistores                | Até 3              | Até 1,5                          | 0                        | 2,8       | A montagem fisíca dispõe de boas cores de fios, utilizando cores diferentes para os fios, uma disposição ok de fios e o uso adequado de resistores |
| Temporização adequada conforme tempos medidos com auxílio de algum instrumento externo                  | Até 3              | Até 1,5                          | 0                        | 3              | O tempo está de acordo |
| Código implementa corretamente as fases do semáforo e estrutura do código (variáveis representativas e comentários) | Até 3              | Até 1,5                          | 0                        | 3              | O código está de fácil entendimento e as fases estão corretas |
| Extra: Implementou um componente de liga/desliga no semáforo e/ou usou ponteiros no código             | Até 1              | Até 0,5                          | 0                        | 1              | Ela utilizou funções no código |

*Pontuação Total: 9,8*


### Avaliador: Lucas Ramenzoni
| Critério                                                                                                 | Contempla (Pontos) | Contempla Parcialmente (Pontos) | Não Contempla (Pontos) | Nota atribuída | Observações do Avaliador |
|---------------------------------------------------------------------------------------------------------|--------------------|----------------------------------|--------------------------|----------------|--------------------------|
| Montagem física com cores corretas, boa disposição dos fios e uso adequado de resistores                | Até 3              | Até 1,5                          | 0                        | 3     | Os fios estão organizados, facilitando a visualização do sistema |
| Temporização adequada conforme tempos medidos com auxílio de algum instrumento externo                  | Até 3              | Até 1,5                          | 0                        | 3              | O tempo está de acordo |
| Código implementa corretamente as fases do semáforo e estrutura do código (variáveis representativas e comentários) | Até 3              | Até 1,5                          | 0                        | 3              | O código está certo |
| Extra: Implementou um componente de liga/desliga no semáforo e/ou usou ponteiros no código             | Até 1              | Até 0,5                          | 0                        | 1              | Tem funções no código e ficou bem executada |

*Pontuação Total: 10*