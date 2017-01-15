## Povray build
#### Script to pull the software from internet, build and install locally POV-Ray automatically.
-----
##### The script can be run anywhere after downloading:
```
git clone https://github.com/luvres/graphics.git

cd graphics/povray/
```
##### And will install in ~/POV-Ray. The installation is started with the following parameters:
```
./install [user] [email]
```
##### Testing
```
$HOME/POV-Ray/bin/povray +a0.3 $HOME/POV-Ray/share/povray-3.7/scenes/advanced/woodbox.pov
```
##### Open the file created in
```
$HOME/POV-Ray/share/povray-3.7/scenes/advanced/woodbox.png
```
