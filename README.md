# Smart Inventory Sorting System (SISS)

A C++17 desktop inventory prototype built with Qt Widgets and SQLite. The application explores a proposed inventory workflow through product records, quantity tracking, and manual occupancy updates for 12 warehouse areas.

## Demonstration

[Watch the project demonstration](https://youtu.be/qQrvXCi_u3s)

## Features

- Register an account with a name, email address, and password; sign in using email and password.
- Create product records with an automatic timestamp, fragility, category, size, assigned area, and quantity.
- View, update, and delete product records through the activity screen.
- Select and display occupancy for warehouse areas 1 through 12, with manual updates through the interface.
- Navigate between home, activity, warehouse, and settings screens.
- Display the signed-in user's name and log out from the settings screen.

## Technologies

- C++17
- Qt Widgets and Qt SQL
- SQLite through the QSQLITE driver
- Qt Designer (`.ui` forms)
- CMake

The original Windows development configuration uses Qt 6.7.0 with MinGW 64-bit. The CMake project and application target are named `SISS`.

## Open the project

1. Install Qt Creator with a Qt 6 desktop kit, a compatible C++ compiler, CMake, and the Qt SQLite driver.
2. Open this repository's `CMakeLists.txt` in Qt Creator.
3. Select your installed Qt 6 desktop kit.
4. Choose a **new, empty build directory**, such as `build/SISS-Debug`, so Qt Creator generates build files for your computer.
5. Complete the database setup below.
6. Configure the project, then build and run the **`SISS`** target in Qt Creator.

## Included build folder

The repository includes a `build/` folder containing generated files from the Windows development environment. Its project-related directory names and readable references use `SISS`, including `SISS.dir`, `SISS_autogen.dir`, and `SISS_autogen`.

The included build files contain machine-specific paths. Compiled objects and binary caches can also retain earlier internal paths. Generate a fresh build in the empty directory selected above to create current files for your system.

Additional details are available in [BUILD-NOTES.md](BUILD-NOTES.md).

## Database setup

The SQLite database is **not included** in this repository. The source currently uses this path:

```text
C:/Qt/SQLiteStudio/SISS.db
```

Provide a database at this location. If you already have the project's database, close the application and copy or rename that database to `SISS.db`, preserving its tables and records.

To use a different location, update all **10** `setDatabaseName(...)` calls across these six source files:

- `login.cpp`
- `signup.cpp`
- `activity.cpp`
- `warehouse.cpp`
- `home.cpp`
- `settings.cpp`

Use the same database path throughout the application. The database must be writable, and its parent folder must exist.

The source creates the `LoginUser` table during registration and the `products` table when opening the activity screen. The warehouse screen also expects an existing `area` table containing `Area1` through `Area12` as its first 12 columns, in that order. Create this table before using the warehouse screen, as its creation is not included in the source. A new, empty database alone does not provide this table or restore existing records.

## Repository layout

| Path | Purpose |
| --- | --- |
| `CMakeLists.txt` | CMake project and `SISS` target configuration |
| `CMakeLists.txt.user` | Qt Creator settings from the original development environment |
| `main.cpp` | Application entry point |
| `login.*` and `signup.*` | Login and account registration |
| `home.*` | Home window and navigation |
| `activity.*` | Product records and quantities |
| `warehouse.*` | Manual occupancy management for 12 areas |
| `settings.*` | User display, navigation, and logout |
| `res.qrc` and `images/` | Qt image resources |
| `build/` | Included Windows development build snapshot |
| `BUILD-NOTES.md` | Build-directory and database setup notes |
| `SISS-Project-Documentation.pdf` | Project report |

Each window uses a `.cpp` source file, a `.h` header, and a `.ui` Qt Designer form. Keep the `images/` folder and its filenames intact because `res.qrc` references those paths.

## Prototype status

SISS demonstrates a proposed inventory-management concept. Warehouse assignments and occupancy are managed manually through the interface.

Login passwords are currently stored as plain text. Use sample accounts for demonstrations.

## Documentation

[Read the project documentation (PDF)](SISS-Project-Documentation.pdf)
