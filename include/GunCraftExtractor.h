#pragma once
#include <string>
#include <memory>

#include "lodepng/lodepng.h"

#include "XNB.h"
#include "WAV.h"

typedef std::unique_ptr<XNB> XNBUniquePtr;

void convertXnb(const std::string&);
void XnbToWav(XNBUniquePtr);
void XnbToPng(XNBUniquePtr);
void PngToXnb(const std::string&);
void WavToXnb(const std::string&);
