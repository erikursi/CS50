#include "helpers.h"

// Convert image to grayscale
void grayscale(int height, int width, RGBTRIPLE image[height][width])
{
    return;
}

// Reflect image horizontally
void reflect(int height, int width, RGBTRIPLE image[height][width])
{
    return;
}

// Blur image
void blur(int height, int width, RGBTRIPLE image[height][width])
{
    return;
}

// Detect edges
void edges(int height, int width, RGBTRIPLE image[height][width])
{
    RGBTRIPLE copy[height][width];
    for (int y = 0; y < height; y++)
    {
        for (int x = 0; x < width; x++)
        {
            copy[y][x].rgbRed = image[y][x];
            copy[y][x].rgbGreen = image[y][x];
            copy[y][x].rgbBlue = imagr[y][x];
        }
    }
    for (int y = 0; y < height; y++)
    {
        for (int x = 0; x < width; x++)
        {
            get_neighbours(x, y, copy, image);
        }
    }

    return;
}

void get_neighbors(int cur_y, int cur_x, int h, int w, RGBTRIPLE copy[h][w], RGBTRIPLE image[h][w]) {
    int new_rgb_val = copy[cur_y][cur_x];
    int Gx[3][3] = {{-1, 0, 1}, {-2, 0, 2}, {-1, 0, 1}};
    int Gy[3][3] = {{-1, -2, -1}, {0, 0, 0}, {1, 2, 1}};
    int Gx_matrix[3][3];
    int Gy_matrix[3][3];
    int new_y, new_x;
    for (int y = -1, row = 0; y <= 1; y++, row++)
    {
        new_y = cur_y + y;
        for (int x = -1, col = 0; x <= 1; x++, col++)
        {
            new_x = cur_x + x;
            if (check_borders(new_y, new_x, h, w))
            {

            }
            else
            {

            }
        }
    }
}


int check_borders(int y, int x, int height, int width)
{
    int border = 0;
    if (y < 0 || y >= height || x < 0 || x >= width)
    {
        border = 1;
    }
    return border;
}

