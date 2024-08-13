#!/bin/bash

# Function to check if Podman machine is running
check_podman_running() {
    # Check if podman machine is running
    if ! podman machine list | grep -q "running"; then
        echo "Starting Podman machine..."
        podman machine start
    else
        echo "Podman machine is already running."
    fi
}

# Call the function to check and start Podman if not running
check_podman_running

# Run the Docker build script
if ./util/docker_build.sh splitkb/aurora/sofle_v2:Henni16; then
    echo "Docker build was successful. Opening current directory."
    open .
else
    echo "Docker build failed. Not opening the directory."
fi