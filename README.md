# Smart Inventory Sorting System (SISS)

A C++17 desktop inventory application built with Qt Widgets and SQLite. The interface supports product records, quantity tracking, and manual occupancy updates for 12 warehouse areas.

## Demonstration

[Watch the project demonstration](https://youtu.be/qQrvXCi_u3s)

## Features

- Register an account with a name, email address, and password; sign in using email and password.
- Create product records with an automatic timestamp, fragility, category, size, assigned area, and quantity.
- View records in a table and use the update and delete controls.
- Select and display occupancy for warehouse areas 1 through 12.
- Navigate between home, activity, warehouse, and settings screens.
- Display the signed-in user's name and log out from the settings screen.

## Technologies

- C++17
- Qt Widgets and Qt SQL
- SQLite through the QSQLITE driver
- Qt Designer (.ui forms)
- CMake

The Windows development configuration uses Qt 6.7.0 with MinGW.

## Open the project

1. Install Qt Creator with a Qt 6 desktop kit, a compatible C++ compiler, CMake, and the Qt SQLite driver.
2. Open this repository's `CMakeLists.txt` in Qt Creator.
3. Select your installed Qt 6 desktop kit.
4. Complete the database setup below.
5. Configure the project, then build and run the application in Qt Creator.

## Database setup

The SQLite database is **not included** in this repository.

Create or provide a local SQLite database, then update each `setDatabaseName(...)` call to use its location. These calls appear in `login.cpp`, `signup.cpp`, `activity.cpp`, `warehouse.cpp`, `home.cpp`, and `settings.cpp`. Use the same database path throughout the application. The database must be writable, and its parent folder must exist.

The source creates the `LoginUser` table during registration and the `products` table when opening the activity screen. The warehouse screen also expects an existing `area` table containing `Area1` through `Area12` as its first 12 columns, in that order. Create this table before using the warehouse screen, as its creation is not included in the source.

## Source layout

| Path | Purpose |
| --- | --- |
| `CMakeLists.txt` | CMake project and target configuration |
| `main.cpp` | Application entry point |
| `login.*` and `signup.*` | Login and account registration |
| `home.*` | Home window and navigation |
| `activity.*` | Product records and quantities |
| `warehouse.*` | Manual occupancy management for 12 areas |
| `settings.*` | User display, navigation, and logout |
| `res.qrc` and `images/` | Qt image resources |
| `.gitignore` | Excludes build output, local settings, and databases |

Each window uses a `.cpp` source file, a `.h` header, and a `.ui` Qt Designer form. Keep the `images/` folder and its filenames intact because `res.qrc` references those paths.

## Prototype status

Login passwords are currently stored as plain text. Use sample accounts for demonstrations.

## Documentation

[Read the project documentation (PDF)](SISS-Project-Documentation.pdf)
