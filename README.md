Note: Used AI to write readme for the project.
# 🗺️ Raylib Tile Map Demo (C++)

A simple tile-based map system built with Raylib + C++ to understand how 2D game worlds work using grids and arrays.

This project demonstrates:

How to store a map using a 2D array

How to draw tiles based on tile type

How to convert player position → tile index

How different tiles affect player movement speed

# 🎮 Controls
Key	Action
W / ↑	Move Up
S / ↓	Move Down
A / ←	Move Left
D / →	Move Right

# 🧱 Tile Types
Tile value	Meaning	Effect
1	Road	Normal speed
0	Land	Slower movement
2	Water	Visual tile (used for boundaries)

# 🧠 Core Concepts Practiced

Grid system using tileSize

2D array map: Citymap[row][col]

Pixel position → tile detection:

tileX = player.x / tileSize
tileY = player.y / tileSize

Data-driven level design

This is a foundation for tile-based games like:

RPG maps

Snake with obstacles

Top-down movement systems

# ⚙️ Tech Stack

C++

Raylib

# ▶️ Build & Run

Make sure Raylib is installed and linked.

Compile example (Windows MinGW):

g++ main.cpp -o mapdemo -lraylib -lopengl32 -lgdi32 -lwinmm

Then run:

mapdemo.exe
# 📌 Purpose

This project is part of a personal learning journey focused on:

Clean beginner game architecture

Understanding tile maps before building full indie games
