ARG IMAGE_BASE="ubuntu:24.04"

FROM ${IMAGE_BASE}

ARG DEBIAN_FRONTEND=noninteractive

# Update the system
RUN apt-get update      && \
    apt-get upgrade -y

# Install packages via apt
RUN apt-get install -y  \
    python3             \
    python3-pip         \
    pipx                \
    gcc-arm-none-eabi

# Install packages via pipx
RUN pipx install \
    pre-commit   \
    cmake

# Update environment variable
ENV PATH="/root/.local/bin:$PATH"
