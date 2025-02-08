# lv_port_pc_vscode

Este projeto é um fork da configuração do LVGL para o Visual Studio Code. Nele, desenvolvi uma aplicação para testar e comparar a biblioteca gráfica LVGL com a antiga que utilizávamos.

## Objetivo

O objetivo deste projeto é avaliar o desempenho e as funcionalidades da biblioteca gráfica LVGL em comparação com a biblioteca gráfica anterior.

## Projeto

![LVGL vs Antiga Biblioteca](/github/projeto.png)

## Como Usar

1. Clone o repositório:
    ```sh
    git clone https://github.com/ArthurSilv4/lv_port_pc_vscode.git
    git submodule update --init --recursive
    ```
2. Abra o projeto no Visual Studio Code.
3. Compile e execute a aplicação.
    ```sh
        mkdir build
        cd build
        cmake -G Ninja ..
        ninja
    ```

## Licença

Este projeto está licenciado sob a licença MIT. Veja o arquivo `LICENSE` para mais detalhes.