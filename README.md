# Kater Leo: Text-Adventure Demo

Ein eigenständig entwickeltes C++ Konsolenprojekt zur Demonstration von Kontrollfluss und Benutzereingabe-Validierung.

## Projektbeschreibung
Dieses Text-Adventure basiert auf einem verzweigten Entscheidungssystem. Der Fokus der Entwicklung lag auf der Implementierung einer robusten Logik, die unterschiedliche Nutzereingaben verarbeiten kann, ohne den Programmfluss zu unterbrechen.

## Technische Umsetzung
*   **Entscheidungslogik:** Vollständige Eigenentwicklung der Handlungsstränge mittels verschachtelter Kontrollstrukturen (`if-else`) und einer zentralen Steuerungsschleife (`while`).
*   **Eingabe-Normalisierung:** Implementierung einer `toLower`-Funktion unter Verwendung der Standard Template Library (STL), konkret `std::transform` und `::tolower`. Dies stellt sicher, dass das Programm unabhängig von Groß- und Kleinschreibung stabil operiert.
*   **String-Handling:** Nutzung von `std::getline` zur sicheren Erfassung von Benutzereingaben über den Standard-Input-Stream.

## Entwicklungsprozess
Das Projekt diente als praktischer Einstieg in die C++ Entwicklung. Schwerpunkte waren:
1.  **Strukturierung von Programmlogik:** Planung und Umsetzung eines konsistenten Entscheidungsbaums.
2.  **Syntax-Recherche:** Eigenständige Erarbeitung von Lösungen für technische Hürden, insbesondere bei der String-Manipulation und der STL-Integration.
3.  **Fehlervermeidung:** Sicherstellung eines stabilen Programmendes nach Abschluss der Handlungsstränge.

---
*Status: Funktionale Demo zur Veranschaulichung der C++ Grundlagen.*
