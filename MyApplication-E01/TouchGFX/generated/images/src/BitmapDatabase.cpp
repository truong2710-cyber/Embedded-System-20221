// 4.20.0 0x82ac2117
// Generated by imageconverter. Please, do not edit!

#include <BitmapDatabase.hpp>
#include <touchgfx/Bitmap.hpp>

extern const unsigned char image_lamb[]; // BITMAP_LAMB_ID = 0, Size: 32x32 pixels
extern const unsigned char image_redcar[]; // BITMAP_REDCAR_ID = 1, Size: 50x85 pixels
extern const unsigned char image_track0[]; // BITMAP_TRACK0_ID = 2, Size: 240x320 pixels
extern const unsigned char image_track1[]; // BITMAP_TRACK1_ID = 3, Size: 240x320 pixels
extern const unsigned char image_track2[]; // BITMAP_TRACK2_ID = 4, Size: 240x320 pixels
extern const unsigned char image_track3[]; // BITMAP_TRACK3_ID = 5, Size: 240x320 pixels
extern const unsigned char image_track4[]; // BITMAP_TRACK4_ID = 6, Size: 240x320 pixels

const touchgfx::Bitmap::BitmapData bitmap_database[] = {
    { image_lamb, 0, 32, 32, 9, 20, 13, ((uint8_t)touchgfx::Bitmap::ARGB8888) >> 3, 4, ((uint8_t)touchgfx::Bitmap::ARGB8888) & 0x7 },
    { image_redcar, 0, 50, 85, 10, 8, 30, ((uint8_t)touchgfx::Bitmap::ARGB8888) >> 3, 74, ((uint8_t)touchgfx::Bitmap::ARGB8888) & 0x7 },
    { image_track0, 0, 240, 320, 0, 0, 240, ((uint8_t)touchgfx::Bitmap::RGB565) >> 3, 320, ((uint8_t)touchgfx::Bitmap::RGB565) & 0x7 },
    { image_track1, 0, 240, 320, 0, 0, 240, ((uint8_t)touchgfx::Bitmap::RGB565) >> 3, 320, ((uint8_t)touchgfx::Bitmap::RGB565) & 0x7 },
    { image_track2, 0, 240, 320, 0, 0, 240, ((uint8_t)touchgfx::Bitmap::RGB565) >> 3, 320, ((uint8_t)touchgfx::Bitmap::RGB565) & 0x7 },
    { image_track3, 0, 240, 320, 0, 0, 240, ((uint8_t)touchgfx::Bitmap::RGB565) >> 3, 320, ((uint8_t)touchgfx::Bitmap::RGB565) & 0x7 },
    { image_track4, 0, 240, 320, 0, 0, 240, ((uint8_t)touchgfx::Bitmap::RGB565) >> 3, 320, ((uint8_t)touchgfx::Bitmap::RGB565) & 0x7 }
};

namespace BitmapDatabase
{
const touchgfx::Bitmap::BitmapData* getInstance()
{
    return bitmap_database;
}

uint16_t getInstanceSize()
{
    return (uint16_t)(sizeof(bitmap_database) / sizeof(touchgfx::Bitmap::BitmapData));
}
} // namespace BitmapDatabase
