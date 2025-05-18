FROM ubuntu:22.04

ARG DEBIAN_FRONTEND=noninteractive

RUN apt-get update && apt-get install -y \
    build-essential \
    cmake \
    git \
    wget \
    python3 \
    python3-pip \
    libboost-all-dev \
    libeigen3-dev \
    libopenblas-dev \
    gdb \
    valgrind \
    && apt-get clean \
    && rm -rf /var/lib/apt/lists/*

WORKDIR /workspace

RUN echo 'alias ll="ls -la"' >> ~/.bashrc

RUN apt-get update && apt-get install -y \
    nvidia-cuda-toolkit \
    nvidia-cuda-dev \
    && apt-get clean \
    && rm -rf /var/lib/apt/lists/*

RUN useradd -m developer && \
    chown -R developer:developer /workspace
USER developer

CMD ["/bin/bash"]
