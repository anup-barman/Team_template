### This script and process has been taken from hamza-28(github) and has been modified.

### Required Packages to compile and make the template

* python3
For apt based distributions like debian/ubuntu/mint/pop_os!/...
  ```bash
  sudo apt-get install python3
  ```
For dnf based distributions like RHEL/CentOS/Fedora/...
  ```bash
  sudo dnf install python3
  ```
* texlive-full
apt based distros:
  ```bash
  sudo apt-get install texlive-full
  ```
dnf based distros:
  ```bash
  sudo dnf install texlive-scheme-full
  ```
* pygments
apt based distros
  ```bash
  sudo apt-get install python3-pip
  pip3 install pygments
  ```
dnf based distros
  ```bash
  sudo dnf install python3-pip
  pip3 install pygments
  ```
  
* **If failed:**

  You will have to create virtual environment in your project directory and acticate it

  ```bash
  sudo apt install python3-venv
  cd 
  cd your/project/directory/address/here
  python3 -m venv <your_env_name>
  source <your_env_name>/bin/activate
  ```

  Your prompt will change to show (<your_env_name>) at the beginning. 

  Now run the commands to install **pygments**



### How To Use

Put your codes in the **code** folder with .cpp file extention. You can create subfolders (E.g. - Graph, String, Math etc.) for different categories.

Open a terminal in your project directory and run - 

```bash
  python3 main.py
```



### Customization

To customize you need to edit the ```template/template.tex``` file.

- To changed team and contest information, change line 4 - 11.

- To change font size, edit line 1 or change ``scaled=..`` in line 21 (more flexible).
