# SISS build notes

The CMake project and application target are named `SISS`. The supplied source,
images, Qt Creator settings, and complete `build/` folder are included.
Generated project directories and their readable references use `SISS.dir`,
`SISS_autogen.dir`, and `SISS_autogen`.

## Open and build

1. Extract this archive into a separate folder named `SISS`.
2. Open `CMakeLists.txt` in Qt Creator and choose an installed Qt desktop kit.
3. Choose a NEW, empty build directory in Qt Creator, such as `build/SISS-Debug`.
4. Configure the project, then build and run the `SISS` target.

The included build folder is a renamed copy of the original generated files.
It still contains machine-specific Windows paths. Compiled object files,
binary dependency data, and editor indexes were preserved without byte edits;
their internal historical paths can only be updated through regeneration.
Use the new build directory to generate fresh metadata and compiled output.
The application has not been compiled or run as part of this naming update.

## Database name

All ten database-path references in the six application source files now use:

```text
C:/Qt/SQLiteStudio/SISS.db
```

The archive does not contain a database. If you have an existing database,
close SISS and copy or rename that database to `SISS.db` at the path above,
preserving its contents. Alternatively, update all ten path references to
your chosen location before building. An empty replacement database does
not supply the warehouse `area` table or your existing records.

## Use with your GitHub repository

Keep your existing repository README, demonstration link, and PDF; they were
not part of this source archive. Replace the matching source and configuration
files with this version. Replace the previous `build/` folder in full so its
old project directories do not remain alongside the renamed directories.
