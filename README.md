# Moteur de jeu

## How to compile

```bash
    >$ make all
    >$ ./moteur
```

## Phase 1

Penser à checker si la position ne devient pas nul en y (on touche le sol)

#### Comprendre comment mettre en scène le test des balles

D'abord un menu pour choisir qu'elle arme utilisé.

Quand on sélectionne l'arme, on apparait sur un plan où on peut viser (vue FPS ou vue à la troisième personne)?

Surement troisieme personne pour mieux visualiser la trajectoire de la balle$

Boule de feu: pas soumis à la gravité
Laser: pas soumis à la gravité
Balle et boulets soumis à la gravité.




Idées:

Ajouter un mode lent (une constante qui ralentit la vitesse réel de la balle mais pas de la personne)

Pas de déplacement, juste un curseur qui se déplace sur l'écran.
La balle part en fonction de l'orientation

