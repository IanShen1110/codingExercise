import pygame
from sys import exit

pygame.init()
screen = pygame.display.set_mode((1920,1080))

background = pygame.image.load("1x/bg.png")
choice_A = pygame.image.load("1x/frame/ass.png")
while True:
    for event in pygame.event.get():
        if event.type == pygame.QUIT:
            pygame.quit()
            exit()
    
    screen.blit(background,(0,0))
    screen.blit(choice_A,(192,872))
    pygame.display.update()
    