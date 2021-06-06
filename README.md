# 42_basecamp_tests
Suíte de testes para as listas de C do basecamp da 42. (dia 31/05/2021 até 19/06/2021)

## O que os testes se propõe a checar:
* Se os arquivos configurados passam na norminette e se são compilados;
* Se há arquivos extras no diretório da lista;
* Se as funções/programas fazem o que deveriam fazer.

## Como usar 
```bash
$> ~/<nome-repo-testes>/<nome-lista>/run.sh <path-repo-a-ser-testado>
```

ex:
você clonou este repositório num diretório chamado `testes` e o seu repositório da lista C01 se chama `repo-c01`. Você deve rodar:
```bash
$> ~/testes/C01/run.sh ~/repo-c01
```

### listas disponíveis:
- C01
- C02

## Limitações
* Os testes não são exaustivos e você não deve confiar apenas neles para verificar suas soluções. Ao invés disso, essa bateria de testes se propõe a evitar problemas mais triviais.
* Este repositório está em construção e no momento só possui os testes da lista C01 e parte da C02. Ele será atualizado ao longo do basecamp. Se você quiser colaborar, apenas mande um pullrequest. :)
