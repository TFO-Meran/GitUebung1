# GIT ÜBUNG 1 

Bearbeite folgende Aufgaben der Reihe nach:
### Aufgaben:
1. Klone dieses Repository auf deinen Rechner. 
>Achtung: Nur Mitglieder der Gruppe 3BEL können das Repo sehen, also musst du in Github angemeldet sein! 
2. Erstelle einen neuen Branch und benenne ihn nach folgendem Muster:
dev_[login]
>Achtung: Es haben alle Teammitglieder Schreibrechte, also überschreibe weder den main-branch noch die branches der Anderen!!!
3. Wechsle in deinen Branch und erstelle im include-Ordner eine neue Header-Datei nach dem Template-Muster mit dem Namen [login].h. Fülle den oberen Teil aus. 
4. Definiere in der Header-Datei nun eine Funktion vom Typ bool welche einen String entgegennimmt. Der Name der Funktion soll lauten: get_[login]
5. Erstelle nun im src-Ordner eine neue cpp-Datei mit dem Namen [login].cpp. Programmiere die Funktion so aus, dass wenn sie einen String mit deinem login entgegennimmt, einen kurzen Text mit deinen Daten:
Vorname, Nachnam, Alter, Wohnort ausgibt und true zurückgibt. wenn der String nicht deinen login enthält, dann wird false zurückgegeben.
6. Schreib in der Main ein Programm das den Benutzer auffordert einen Login-Namen einzugeben. Anschließend soll deine Funktion aufgerufen werden. Falls die Funktion false zurückgibt, wird die Benutzereingabe wiederholt, ansonsten wird das Programm beendet.
7. Überprüfe, ob dein Programm compilierbar ist und funktioniert. Falls ja, führe nun einen Push aus. Überprüfe online, ob dein branch zu übertragen wurde.
>Achtung: Für den push wird sich ein kleines Fenster für die Authentifizierung an Github öffnen. Hier musst du dich korrekt anmelden, sonst funktioniert der push nicht.

