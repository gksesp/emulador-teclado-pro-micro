#include <Keyboard.h>

void setup() {
  // Inicia a emulação de teclado
  Keyboard.begin();
  delay(2000); // Tempo para estabilizar

  // Cria uma pasta chamada "salarios" na área de trabalho (somente Windows)
  Keyboard.press(KEY_LEFT_GUI);  // Pressiona a tecla Windows
  Keyboard.press('r');           // Tecla R para abrir o Executar
  Keyboard.releaseAll();
  delay(500);

  // Digita o comando para abrir o cmd
  Keyboard.print("cmd /c mkdir %userprofile%\\Desktop\\salarios");
  Keyboard.press(KEY_RETURN);
  Keyboard.releaseAll();
  delay(1000);

  // Envia um comando para travar o sistema
  Keyboard.print("cmd /c rundll32.exe user32.dll,LockWorkStation");
  Keyboard.press(KEY_RETURN);
  Keyboard.releaseAll();

  // Finaliza o teclado
  Keyboard.end();
}

void loop() {
  // Nada a ser executado no loop
}
