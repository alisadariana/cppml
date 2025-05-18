# C++ Deep Learning Framework

A modern, high-performance C++ framework for building deep learning models with GPU acceleration.

## 🏗️ Project Structure

```bash
.
├── .devcontainer/          # VS Code Dev Container configuration
│   └── devcontainer.json   # Configuration for remote development
├── docker/                 # Docker configuration
│   ├── Dockerfile          # Container definition with CUDA support
│   └── docker-compose.yml  # Container orchestration
├── include/                # Public header files
│   └── core.h              # Core framework definitions
├── src/                    # Implementation source files
│   └── placeholder.cpp     # Initial implementation
├── examples/               # Example applications
│   └── main.cpp            # Simple example demonstrating basic functionality
├── CMakeLists.txt          # Build system configuration
└── README.md               # This file
```

## 🚀 Project Status

**Current Stage**: Initial Development with Working Example

This project is in the early stages of development with the following components in place:

- Development environment (Docker container with CUDA support)
- Basic project structure with placeholder implementation
- Core framework definitions in `include/core.h`
- Build system configuration (CMake)
- Simple working example application

The framework currently provides:

- Version information
- CUDA availability detection
- Basic project structure and namespaces

Core functionality like tensor operations, automatic differentiation, and neural network layers are planned but not yet implemented.

## 🛠️ Technology Stack

- **Language**: C++17
- **Build System**: CMake
- **Container**: Docker with CUDA support
- **Linear Algebra**: Eigen
- **GPU Acceleration**: NVIDIA CUDA
- **Editor Integration**: VS Code with Dev Containers

## 🚀 Getting Started

### Prerequisites

- Docker (20.10.0+)
- Docker Compose (2.0.0+)
- Visual Studio Code
- VS Code Remote - Containers extension
- NVIDIA GPU with CUDA support (for GPU acceleration)
- NVIDIA Container Toolkit installed

### Setup and Development

1. **Clone the repository**:

   ```bash
   git clone <repository-url>
   cd <repository-name>
   ```

2. **Open in VS Code with Dev Containers**:
   - Open the project folder in VS Code
   - VS Code will detect the Dev Container configuration and prompt you to reopen in container
   - Click "Reopen in Container"
   - The container will build and start automatically

3. **Build the project**:

   ```bash
   # Inside the dev container
   mkdir -p build && cd build
   cmake ..
   make -j$(nproc)
   ```

4. **Run tests** (once implemented):

   ```bash
   # Inside the build directory
   make test
   ```

### Running the Example

After building the project:

```bash
# Inside the build directory
./bin/simple_example
```

This will display the framework version and CUDA availability status, demonstrating that the basic setup is working correctly.

## 🧩 Framework Design

The framework will consist of the following main components:

### Core Components (Planned)

- **Tensor**: N-dimensional array data structure with GPU support
- **Autograd**: Automatic differentiation engine
- **Device**: Abstraction for CPU/GPU computation

### Neural Network Components (Planned)

- **Layers**: Fully connected, convolutional, pooling layers
- **Activations**: ReLU, Sigmoid, Tanh, etc.
- **Loss Functions**: MSE, Cross Entropy, etc.
- **Optimizers**: SGD, Adam, RMSProp

## 🧪 Development Workflow

1. **Development Environment**:
   - All development happens inside the Dev Container
   - VS Code provides full IDE capabilities within the container
   - CUDA toolkit is available for GPU acceleration

2. **Build System**:
   - CMake handles the build configuration
   - Build options are controlled via CMake variables:
     - `-DBUILD_TESTS=ON|OFF`: Enable/disable tests
     - `-DUSE_CUDA=ON|OFF`: Enable/disable CUDA support
     - `-DBUILD_EXAMPLES=ON|OFF`: Enable/disable examples

3. **Adding Components**:
   - Header files go in `include/`
   - Implementation files go in `src/`
   - Update CMakeLists.txt to include new source files

## 📚 Design Philosophy

This framework is designed with the following principles:

1. **Performance**: Optimized for computational efficiency
2. **Flexibility**: Modular design for extensibility
3. **Modern C++**: Leveraging C++17 features
4. **GPU Acceleration**: First-class CUDA support
5. **Minimal Dependencies**: Focused on Eigen and CUDA core

## 🤝 Contributing

Contributions are welcome! To contribute:

1. Create a feature branch
2. Implement your changes
3. Add tests for new functionality
4. Ensure all tests pass
5. Submit a pull request

## 📄 License

This project is licensed under the [GNU AFFERO GENERAL PUBLIC LICENSE v3.0](LICENSE).

## 🔮 Roadmap

1. **Phase 1** (Current):
   - Initial project setup
   - Development environment
   - Build system configuration

2. **Phase 2**:
   - Tensor implementation
   - Basic linear algebra operations
   - CPU and GPU device abstractions

3. **Phase 3**:
   - Automatic differentiation
   - Gradient computation

4. **Phase 4**:
   - Neural network layers
   - Optimizers
   - Training infrastructure

5. **Phase 5**:
   - Advanced models
   - Performance optimization
   - Documentation and examples

## 🔍 For AI Agents

For AI agents analyzing this project:

- The project follows standard C++ project architecture and CMake conventions
- Development occurs in a Docker container with VS Code Dev Containers
- CUDA support is enabled for GPU acceleration
- The primary design goal is to create a high-performance deep learning framework
- Future implementation will focus on creating tensor operations and neural network primitives
- The code will heavily utilize modern C++ features and template metaprogramming

Key files to focus on:

- `CMakeLists.txt`: Build configuration
- `include/`: Header files defining the public API
- `src/`: Implementation source files
- `docker/Dockerfile`: Development environment configuration
