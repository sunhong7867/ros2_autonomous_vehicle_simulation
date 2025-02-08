
#!/bin/bash

sudo apt-get update
sudo apt-get install -y python3-pip 


pip install opencv-python pyserial 
pip install ultralytics==8.2.69
pip install setuptools==58.2.0 
pip install pynput

sudo apt install gazebo
sudo apt install ros-humble-gazebo-ros-pkgs
sudo apt install ros-humble-xacro
sudo apt install ros-humble-gazebo-ros
sudo apt-get install ros-humble-gazebo-msgs
sudo apt-get install ros-humble-gazebo-plugins


pip install transformers
curl -s https://packagecloud.io/install/repositories/github/git-lfs/script.deb.sh | sudo bash
pip install huggingface_hub



# cp -r ~/ros2_ws/src/simulation_pkg/models/* /home/$(whoami)/.gazebo/models
GAZEBO_DIR="/home/$(whoami)/.gazebo"
if [ -d "$GAZEBO_DIR" ]; then
    echo "" # .gazebo 폴더가 존재하는지 확인
else
    echo ".gazebo 폴더가 존재하지 않아 생성합니다."
    mkdir "$GAZEBO_DIR"
fi
MODELS_DIR="$GAZEBO_DIR/models"
if [ -d "$MODELS_DIR" ]; then
    echo "" # .gazebo/models 폴더가 존재하는지 확인
else
    echo "models 폴더가 존재하지 않아 생성합니다."
    mkdir "$MODELS_DIR"
fi


# 패키지 폴더의 모든 내용을 .gazebo/models 폴더로 복사
SOURCE_MODELS_DIR="/home/$(whoami)/ros2_ws/src/simulation_pkg/models"
if [ -d "$SOURCE_MODELS_DIR" ]; then
    echo "$SOURCE_MODELS_DIR의 내용을 $MODELS_DIR로 복사합니다."
    cp -r "$SOURCE_MODELS_DIR/"* "$MODELS_DIR/"
else
    echo "$SOURCE_MODELS_DIR 폴더가 존재하지 않습니다."
fi
