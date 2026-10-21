# Smart Inventory Sorting System (SISS)

A C++ desktop application built with Qt Widgets and SQLite for managing product records and manually tracking storage-area occupancy.

## Demonstration

[Watch the project demonstration](https://youtu.be/qQrvXCi_u3s)

## Features represented in the source

- User registration and login.
- Product records with product name, timestamp, fragility, category, size, and assigned section.
- Create, update, and delete controls for product records.
- Manual occupancy selection and display for three storage areas.
- Home, inventory, warehouse, and settings screens built with Qt Designer forms and image resources.

## Technologies

- C++17
- Qt Widgets and Qt SQL
- SQLite through the QSQLITE driver
- Qt Designer (.ui forms)
- CMake

The supplied build configuration was generated for Qt 6.7.0 and MinGW on Windows. This upload copy has not been compiled or run during repository preparation.

## Open the project

1. Install Qt Creator with a Qt 6 desktop kit, a compatible C++ compiler, CMake, and the Qt SQLite driver.
2. In Qt Creator, open `CMakeLists.txt` in this repository.
3. Choose your installed Qt 6 desktop kit.
4. Complete the database setup below before attempting to use the application.
5. Configure, build, and run the `SISSYYY` target. Address any build issues reported for this archived source snapshot.

## Database setup required

The original `SISS.db` database is **not included** in the uploaded archive or this repository.

The source currently refers to this absolute Windows path:

```text
C:/Qt/SQLiteStudio/SISS/SISS.db
```

The path appears in `mainwindow.cpp`, `signup.cpp`, `mainpage.cpp`, and `area.cpp`. Supply a local database and update those paths as needed for your computer.

The code creates the `LoginUser` table during registration and the `products` table when opening the inventory screen. The warehouse screen also expects an existing `users` table with `Area1`, `Area2`, and `Area3` columns; its creation is not included in the supplied source. The database must be writable and its parent folder must exist.

## Prototype status

This repository preserves the application source as supplied. Runtime behavior has not been verified. The login implementation stores passwords as text; use sample accounts for demonstrations.

## Repository contents

- `CMakeLists.txt`: project configuration.
- `main.cpp`, `.cpp` and `.h` files: application logic and window classes.
- `.ui` files: Qt Designer interfaces.
- `res.qrc` and `1.png` through `7.png`: application image resources.
- `.gitignore`: excludes generated build output, Qt Creator local settings, and local databases.

Generated build files and machine-specific Qt Creator settings have been omitted from this upload copy. All 28 retained original files are byte-for-byte unchanged.
