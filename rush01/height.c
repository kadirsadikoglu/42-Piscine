#include <stdio.h>

#define MAX_HEIGHT 4 // Maksimum yükseklik

// Her bir yükseklik seviyesindeki görünür kutu sayısını hesaplar
void calculate_visible_boxes(int heights[], int visible_boxes[], int n) {
    for (int i = 0; i < n; i++) {
        int max_height = 0;
        for (int j = i + 1; j < n; j++) {
            if (heights[j] > max_height) {
                max_height = heights[j];
                visible_boxes[i]++;
            }
        }
    }
}

void calculate_visible_cells(int visible_cells)
{
	int i;
	int max_height;

	i = 0;
	while (i < 4)
	{
		/* code */
	}
	
}

// Toplam görünür kutu sayısını hesaplar
int calculate_total_visible(int visible_boxes[], int n) { // kullanıcı kutu sayısı n
    int total_visible = 0;
    for (int i = 0; i < n; i++) {
        total_visible += visible_boxes[i];
    }
    return total_visible;
}

int main() {
    int heights[MAX_HEIGHT]; // Yükseklik seviyelerini tutacak dizi
    int visible_boxes[MAX_HEIGHT] = {0}; // Her bir yükseklik seviyesindeki görünür kutu sayısı
    int n; // Kutu sayısı

    // Yükseklik seviyelerini al
    get_heights(heights, n);

    // Her bir yükseklik seviyesindeki görünür kutu sayısını hesapla
    calculate_visible_boxes(heights, visible_boxes, n);

    // Toplam görünür kutu sayısını hesapla
    int total_visible = calculate_total_visible(visible_boxes, n);

    // Sonuçları ekrana yazdır
    printf("Her bir yükseklik seviyesinde görünür kutu sayısı:\n");
    for (int i = 0; i < n; i++) {
        printf("Yükseklik %d: %d\n", i + 1, visible_boxes[i]);
    }
    printf("Toplam görünür kutu sayısı: %d\n", total_visible);

    return 0;
}
