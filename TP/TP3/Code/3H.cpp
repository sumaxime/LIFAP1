/* Générer une grille d'images positionnées aléatoirement */
#include <Grapic.h>

using namespace grapic;

const int DIMW = 500;

/* Procédure */

void grilleImage()
{
  const int ligne = 6;
  const int col = 6;
  int rNum;
  Image im1 = image("data/mine.png");
  Image im2 = image("data/flag.png");
  Image im3 = image("data/grapic.png");
  
  for (int i = 0; i < ligne; ++i)
    for (int j = 0; j < col; ++j) {
      rNum = rand () % 3;
      if (rNum == 0) {
        image_draw(im1, i * (DIMW / ligne), j * (DIMW / col), (DIMW/ligne),
          (DIMW / col));
      } else if (rNum == 1) {
        image_draw(im2, i * (DIMW / ligne), j * (DIMW / col), (DIMW / ligne),
          (DIMW / col));
      } else {
        image_draw(im3, i * (DIMW / ligne), j * (DIMW / col), (DIMW/ligne),
          (DIMW/col));
      }
    }

  delay(5000);
}

/* Utilisation */

int main()
{
  winInit("Grille d'images", DIMW, DIMW);
  backgroundColor(255, 255, 255);
  winClear();
  
  grilleImage(); // Debug
  
  winDisplay();
  pressSpace();
  winQuit();
  
  return 0;
}
