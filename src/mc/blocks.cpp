// Distributed under the BSD License, see accompanying LICENSE.txt
// (C) Copyright 2010 John-John Tedro et al.
#include "blocks.hpp"

namespace mc {
  const int MapX = 0x10;
  const int MapZ = 0x10;
  const int MapY = 0x80;

  const char **MaterialName;
  color *MaterialColor;
  color *MaterialSideColor;

  MaterialMode *MaterialModes;

  void initialize_constants() {
    MaterialName = new const char*[MaterialCount];
    MaterialColor = new color[MaterialCount];
    MaterialSideColor = new color[MaterialCount];
    MaterialModes = new enum MaterialMode[MaterialCount];
    
    MaterialName[Air] = "Air";
    MaterialName[Stone] = "Stone";
    MaterialName[Grass] = "Grass";
    MaterialName[Dirt] = "Dirt";
    MaterialName[Cobblestone] = "Cobblestone";
    MaterialName[Wood] = "Wood";
    MaterialName[Sapling] = "Sapling";
    MaterialName[Bedrock] = "Bedrock";
    MaterialName[Water] = "Water";
    MaterialName[StationaryWater] = "StationaryWater";
    MaterialName[Lava] = "Lava";
    MaterialName[StationaryLava] = "StationaryLava";
    MaterialName[Sand] = "Sand";
    MaterialName[Gravel] = "Gravel";
    MaterialName[GoldOre] = "GoldOre";
    MaterialName[IronOre] = "IronOre";
    MaterialName[CoalOre] = "CoalOre";
    MaterialName[Log] = "Log";
    MaterialName[Leaves] = "Leaves";
    MaterialName[Sponge] = "Sponge";
    MaterialName[Glass] = "Glass";
    MaterialName[LapisLazuliOre] = "LapisLazuliOre";
    MaterialName[LapisLazuliBlock] = "LapisLazuliBlock";
    MaterialName[Dispenser] = "Dispenser";
    MaterialName[Sandstone] = "Sandstone";
    MaterialName[NoteBlock] = "NoteBlock";
    MaterialName[BlackWool] = "BlackWool";
    MaterialName[GrayWool] = "GrayWool";
    MaterialName[WhiteWool] = "WhiteWool";
    MaterialName[YellowFlower] = "YellowFlower";
    MaterialName[RedRose] = "RedRose";
    MaterialName[BrownMushroom] = "BrownMushroom";
    MaterialName[RedMushroom] = "RedMushroom";
    MaterialName[GoldBlock] = "GoldBlock";
    MaterialName[IronBlock] = "IronBlock";
    MaterialName[DoubleStep] = "DoubleStep";
    MaterialName[Step] = "Step";
    MaterialName[Brick] = "Brick";
    MaterialName[TNT] = "TNT";
    MaterialName[Bookcase] = "Bookcase";
    MaterialName[MossyCobblestone] = "MossyCobblestone";
    MaterialName[Obsidian] = "Obsidian";
    MaterialName[Torch] = "Torch";
    MaterialName[Fire] = "Fire";
    MaterialName[MobSpawner] = "MobSpawner";
    MaterialName[WoodenStairs] = "WoodenStairs";
    MaterialName[Chest] = "Chest";
    MaterialName[RedstoneWire] = "RedstoneWire";
    MaterialName[DiamondOre] = "DiamondOre";
    MaterialName[DiamondBlock] = "DiamondBlock";
    MaterialName[Workbench] = "Workbench";
    MaterialName[Crops] = "Crops";
    MaterialName[Soil] = "Soil";
    MaterialName[Furnace] = "Furnace";
    MaterialName[BurningFurnace] = "BurningFurnace";
    MaterialName[SignPost] = "SignPost";
    MaterialName[WoodenDoor] = "WoodenDoor";
    MaterialName[Ladder] = "Ladder";
    MaterialName[MinecartTracks] = "MinecartTracks";
    MaterialName[CobblestoneStairs] = "CobblestoneStairs";
    MaterialName[WallSign] = "WallSign";
    MaterialName[Lever] = "Lever";
    MaterialName[StonePressurePlate] = "StonePressurePlate";
    MaterialName[IronDoor] = "IronDoor";
    MaterialName[WoodenPressurePlate] = "WoodenPressurePlate";
    MaterialName[RedstoneOre] = "RedstoneOre";
    MaterialName[GlowingRedstoneOre] = "GlowingRedstoneOre";
    MaterialName[RedstoneTorchOff] = "RedstoneTorchOff";
    MaterialName[RedstoneTorchOn] = "RedstoneTorchOn";
    MaterialName[StoneButton] = "StoneButton";
    MaterialName[Snow] = "Snow";
    MaterialName[Ice] = "Ice";
    MaterialName[SnowBlock] = "SnowBlock";
    MaterialName[Cactus] = "Cactus";
    MaterialName[Clay] = "Clay";
    MaterialName[Reed] = "Reed";
    MaterialName[Jukebox] = "Jukebox";
    MaterialName[Fence] = "Fence";
    MaterialName[Pumpkin] = "Pumpkin";
    MaterialName[Bloodstone] = "Bloodstone";
    MaterialName[Slowsand] = "Slowsand";
    MaterialName[Lightstone] = "Lightstone";
    MaterialName[Portal] = "Portal";
    MaterialName[Jackolantern] = "Jackolantern";
    MaterialName[Cake] = "Cake";
    MaterialName[PineLeaves] = "PineLeaves";
    MaterialName[BirchLeaves] = "BirchLeaves";
    
    MaterialColor[Air] = color(255,255,255,0);
    MaterialColor[Stone] = color(128,128,128,255);
    MaterialColor[Grass] = color(120,172,70,255);
    MaterialColor[Dirt] = color(134,96,67,255);
    MaterialColor[Cobblestone] = color(100,100,100,255);
    MaterialColor[Wood] = color(157,128,79,255);
    MaterialColor[Sapling] = color(120,120,120,0);
    MaterialColor[Bedrock] = color(84,84,84,255);
    MaterialColor[Water] = color(56,68,127,127);
    MaterialColor[StationaryWater] = color(56,68,127,127);
    MaterialColor[Lava] = color(255,90,0,255);
    MaterialColor[StationaryLava] = color(255,90,0,255);
    MaterialColor[Sand] = color(218,210,158,255);
    MaterialColor[Gravel] = color(136,126,126,255);
    MaterialColor[GoldOre] = color(143,140,125,255);
    MaterialColor[IronOre] = color(136,130,127,255);
    MaterialColor[CoalOre] = color(115,115,115,255);
    MaterialColor[Log] = color(102,81,51,255);
    MaterialColor[Leaves] = color(0x4a,0x83,0x42,0x80);
    MaterialColor[Sponge] = color(0xc3,0xc3,0x32,0xff);
    MaterialColor[Glass] = color(255,255,255,48);
    MaterialColor[LapisLazuliOre] = color(102,112,134,255);
    MaterialColor[LapisLazuliBlock] = color(29,71,165,255);
    MaterialColor[Dispenser] = color(107,107,107,255);
    MaterialColor[Sandstone] = MaterialColor[Sand];
    MaterialColor[NoteBlock] = color(100,67,50,255);
    MaterialColor[BlackWool] = color(77,77,77,255);
    MaterialColor[GrayWool] = color(143,143,143,255);
    MaterialColor[WhiteWool] = color(222,222,222,255);
    MaterialColor[YellowFlower] = color(255,255,0,255);
    MaterialColor[RedRose] = color(255,0,0,255);
    MaterialColor[BrownMushroom] = color(0x00, 0x00, 0x00, 0x00);
    MaterialColor[RedMushroom] = color(0x00, 0x00, 0x00, 0x00);
    MaterialColor[GoldBlock] = color(0xff, 0xed, 0x8c, 0xff);
    MaterialColor[IronBlock] = color(0xd9, 0xd9, 0xd9, 0xff);
    MaterialColor[DoubleStep] = color(200,200,200,255);
    MaterialColor[Step] = color(200,200,200,255);
    MaterialColor[Brick] = color(0x56, 0x23, 0x17, 0xff);
    MaterialColor[TNT] = color(0xff, 0x0, 0x0, 0xff);
    MaterialColor[Bookcase] = color(0xbf, 0xa9, 0x74, 0xff);
    MaterialColor[MossyCobblestone] = color(0x7f, 0xae, 0x7d, 0xff);
    MaterialColor[Obsidian] = color(0x11, 0x0d, 0x1a, 0xff);
    MaterialColor[Torch] = color(0xff, 0xe1, 0x60,0xd0);
    MaterialColor[Fire] = color(0xe0, 0xae, 0x15, 0xff);
    MaterialColor[MobSpawner] = color(0xff, 0xff, 0xff, 0x00);
    MaterialColor[WoodenStairs] = color(0xbf, 0xa9, 0x74, 0xff);
    MaterialColor[Chest] = color(0xbf, 0x87, 0x02, 0xff);
    MaterialColor[RedstoneWire] = color(0x6f, 0x01, 0x01, 0xff);
    MaterialColor[DiamondOre] = color(129,140,143,255);
    MaterialColor[DiamondBlock] = color(45,166,152,255);
    MaterialColor[Workbench] = color(0xa9, 0x6b, 0x00, 0xff);
    MaterialColor[Crops] = color(0x90, 0xbc, 0x27, 0xff);
    MaterialColor[Soil] = MaterialColor[Dirt];
    MaterialColor[Furnace] = color(0xbc, 0xbc, 0xbc, 0xff);
    MaterialColor[BurningFurnace] = color(0xdd, 0xdd, 0xdd, 0xff);
    MaterialColor[SignPost] = color(0x0, 0x0, 0x0, 0x0);
    MaterialColor[WoodenDoor] = color();
    MaterialColor[Ladder] = color(0xff, 0xc8, 0x8c, 0);
    MaterialColor[MinecartTracks] = color(120, 120, 120, 128);
    MaterialColor[CobblestoneStairs] = color(120, 120, 120, 128);
    MaterialColor[WallSign] = color();
    MaterialColor[Lever] = color();
    MaterialColor[StonePressurePlate] = color(120,120,120,255);
    MaterialColor[IronDoor] = color();
    MaterialColor[WoodenPressurePlate] = color();
    MaterialColor[RedstoneOre] = color(143,125,125,0xff);
    MaterialColor[GlowingRedstoneOre] = color(163,145,145,0xff);
    MaterialColor[RedstoneTorchOff] = color(181,140,64,32);
    MaterialColor[RedstoneTorchOn] = color(255,0,0,0xb0);
    MaterialColor[StoneButton] = color();
    MaterialColor[Snow] = color(255, 255, 255, 255);
    MaterialColor[Ice] = color(120, 120, 255, 120);
    MaterialColor[SnowBlock] = color(255, 255, 255, 255);
    MaterialColor[Cactus] = color(85,107,47,255);
    MaterialColor[Clay] = color(0x90, 0x98, 0xa8, 0xff);
    MaterialColor[Reed] = color(193,234,150,255);
    MaterialColor[Jukebox] = color(0x7d, 0x42, 0x2c, 0xff);
    MaterialColor[Fence] = color(0x58, 0x36, 0x16, 200);
    MaterialColor[Pumpkin] = color(0xe3, 0x90, 0x1d, 0xff);
    MaterialColor[Bloodstone] = color(0xc2, 0x73, 0x73, 0xff);
    MaterialColor[Slowsand] = color(0x79, 0x61, 0x52, 0xff);
    MaterialColor[Lightstone] = color(0xff, 0xbc, 0x5e, 0xff);
    MaterialColor[Portal] = color(0x3c, 0x0d, 0x6a, 0x7f);
    MaterialColor[Jackolantern] = MaterialColor[Pumpkin];
    MaterialColor[Cake] = color(228,205,206,255);
    MaterialColor[PineLeaves] = color(MaterialColor[Leaves]).darken(25);
    MaterialColor[BirchLeaves] = color(MaterialColor[Leaves]).lighten(25);
    
    MaterialSideColor[Air] = color(MaterialColor[Air]);
    MaterialSideColor[Stone] = color(MaterialColor[Stone]);
    MaterialSideColor[Grass] = color(MaterialColor[Dirt]);
    MaterialSideColor[Dirt] = color(MaterialColor[Dirt]);
    MaterialSideColor[Cobblestone] = color(MaterialColor[Cobblestone]);
    MaterialSideColor[Wood] = color(MaterialColor[Wood]);
    MaterialSideColor[Sapling] = color(MaterialColor[Sapling]);
    MaterialSideColor[Bedrock] = color(MaterialColor[Bedrock]);
    MaterialSideColor[Water] = color(MaterialColor[Water]);
    MaterialSideColor[StationaryWater] = color(MaterialColor[StationaryWater]);
    MaterialSideColor[Lava] = color(MaterialColor[Lava]);
    MaterialSideColor[StationaryLava] = color(MaterialColor[StationaryLava]);
    MaterialSideColor[Sand] = color(MaterialColor[Sand]);
    MaterialSideColor[Gravel] = color(MaterialColor[Gravel]);
    MaterialSideColor[GoldOre] = color(MaterialColor[GoldOre]);
    MaterialSideColor[IronOre] = color(MaterialColor[IronOre]);
    MaterialSideColor[CoalOre] = color(MaterialColor[CoalOre]);
    MaterialSideColor[Log] = color(MaterialColor[Log]);
    MaterialSideColor[Leaves] = color(MaterialColor[Leaves]);
    MaterialSideColor[Sponge] = color(MaterialColor[Sponge]);
    MaterialSideColor[Glass] = color(MaterialColor[Glass]);
    MaterialSideColor[LapisLazuliOre] = color(MaterialColor[LapisLazuliOre]);
    MaterialSideColor[LapisLazuliBlock] = color(MaterialColor[LapisLazuliBlock]);
    MaterialSideColor[Dispenser] = color(MaterialColor[Dispenser]);
    MaterialSideColor[Sandstone] = color(MaterialColor[Sandstone]);
    MaterialSideColor[NoteBlock] = color(MaterialColor[NoteBlock]);
    MaterialSideColor[BlackWool] = color(MaterialColor[BlackWool]);
    MaterialSideColor[GrayWool] = color(MaterialColor[GrayWool]);
    MaterialSideColor[WhiteWool] = color(MaterialColor[WhiteWool]);
    MaterialSideColor[YellowFlower] = color(MaterialColor[YellowFlower]);
    MaterialSideColor[RedRose] = color(MaterialColor[RedRose]);
    MaterialSideColor[BrownMushroom] = color(MaterialColor[BrownMushroom]);
    MaterialSideColor[RedMushroom] = color(MaterialColor[RedMushroom]);
    MaterialSideColor[GoldBlock] = color(MaterialColor[GoldBlock]);
    MaterialSideColor[IronBlock] = color(MaterialColor[IronBlock]);
    MaterialSideColor[DoubleStep] = color(MaterialColor[DoubleStep]);
    MaterialSideColor[Step] = color(MaterialColor[Step]);
    MaterialSideColor[Brick] = color(MaterialColor[Brick]);
    MaterialSideColor[TNT] = color(MaterialColor[TNT]);
    MaterialSideColor[Bookcase] = color(MaterialColor[Bookcase]);
    MaterialSideColor[MossyCobblestone] = color(MaterialColor[MossyCobblestone]);
    MaterialSideColor[Obsidian] = color(MaterialColor[Obsidian]);
    MaterialSideColor[Torch] = color(MaterialColor[Torch]);
    MaterialSideColor[Fire] = color(MaterialColor[Fire]);
    MaterialSideColor[MobSpawner] = color(MaterialColor[MobSpawner]);
    MaterialSideColor[WoodenStairs] = color(MaterialColor[WoodenStairs]);
    MaterialSideColor[Chest] = color(MaterialColor[Chest]);
    MaterialSideColor[RedstoneWire] = color(MaterialColor[RedstoneWire]);
    MaterialSideColor[DiamondOre] = color(MaterialColor[DiamondOre]);
    MaterialSideColor[DiamondBlock] = color(MaterialColor[DiamondBlock]);
    MaterialSideColor[Workbench] = color(MaterialColor[Workbench]);
    MaterialSideColor[Crops] = color(MaterialColor[Crops]);
    MaterialSideColor[Soil] = color(MaterialColor[Soil]);
    MaterialSideColor[Furnace] = color(MaterialColor[Furnace]);
    MaterialSideColor[BurningFurnace] = color(MaterialColor[BurningFurnace]);
    MaterialSideColor[SignPost] = color(MaterialColor[SignPost]);
    MaterialSideColor[WoodenDoor] = color(MaterialColor[WoodenDoor]);
    MaterialSideColor[Ladder] = color(MaterialColor[Ladder]);
    MaterialSideColor[MinecartTracks] = color(MaterialColor[MinecartTracks]);
    MaterialSideColor[CobblestoneStairs] = color(MaterialColor[CobblestoneStairs]);
    MaterialSideColor[WallSign] = color(MaterialColor[WallSign]);
    MaterialSideColor[Lever] = color(MaterialColor[Lever]);
    MaterialSideColor[StonePressurePlate] = color(MaterialColor[StonePressurePlate]);
    MaterialSideColor[IronDoor] = color(MaterialColor[IronDoor]);
    MaterialSideColor[WoodenPressurePlate] = color(MaterialColor[WoodenPressurePlate]);
    MaterialSideColor[RedstoneOre] = color(MaterialColor[RedstoneOre]);
    MaterialSideColor[GlowingRedstoneOre] = color(MaterialColor[GlowingRedstoneOre]);
    MaterialSideColor[RedstoneTorchOff] = color(MaterialColor[RedstoneTorchOff]);
    MaterialSideColor[RedstoneTorchOn] = color(MaterialColor[RedstoneTorchOn]);
    MaterialSideColor[StoneButton] = color(MaterialColor[StoneButton]);
    MaterialSideColor[Snow] = color(MaterialColor[Snow]);
    MaterialSideColor[Ice] = color(MaterialColor[Ice]);
    MaterialSideColor[SnowBlock] = color(MaterialColor[SnowBlock]);
    MaterialSideColor[Cactus] = color(MaterialColor[Cactus]);
    MaterialSideColor[Clay] = color(MaterialColor[Clay]);
    MaterialSideColor[Reed] = color(MaterialColor[Reed]);
    MaterialSideColor[Jukebox] = color(MaterialColor[Jukebox]);
    MaterialSideColor[Fence] = color(MaterialColor[Fence]);
    MaterialSideColor[Pumpkin] = color(MaterialColor[Pumpkin]);
    MaterialSideColor[Bloodstone] = color(MaterialColor[Bloodstone]);
    MaterialSideColor[Slowsand] = color(MaterialColor[Slowsand]);
    MaterialSideColor[Lightstone] = color(MaterialColor[Lightstone]);
    MaterialSideColor[Portal] = color(MaterialColor[Portal]);
    MaterialSideColor[Jackolantern] = color(MaterialColor[Jackolantern]);
    MaterialSideColor[Cake] = color(MaterialColor[Cake]);
    MaterialSideColor[PineLeaves] = color(MaterialColor[PineLeaves]);
    MaterialSideColor[BirchLeaves] = color(MaterialColor[BirchLeaves]);
    
    MaterialModes[Air] = Block;
    MaterialModes[Stone] = Block;
    MaterialModes[Grass] = Block;
    MaterialModes[Dirt] = Block;
    MaterialModes[Cobblestone] = Block;
    MaterialModes[Wood] = Block;
    MaterialModes[Sapling] = Block;
    MaterialModes[Bedrock] = Block;
    MaterialModes[Water] = Block;
    MaterialModes[StationaryWater] = Block;
    MaterialModes[Lava] = Block;
    MaterialModes[StationaryLava] = Block;
    MaterialModes[Sand] = Block;
    MaterialModes[Gravel] = Block;
    MaterialModes[GoldOre] = Block;
    MaterialModes[IronOre] = Block;
    MaterialModes[CoalOre] = Block;
    MaterialModes[Log] = Block;
    MaterialModes[Leaves] = Block;
    MaterialModes[Sponge] = Block;
    MaterialModes[Glass] = Block;
    MaterialModes[LapisLazuliOre] = Block;
    MaterialModes[LapisLazuliBlock] = Block;
    MaterialModes[Dispenser] = Block;
    MaterialModes[Sandstone] = Block;
    MaterialModes[NoteBlock] = Block;
    MaterialModes[BlackWool] = Block;
    MaterialModes[GrayWool] = Block;
    MaterialModes[WhiteWool] = Block;
    MaterialModes[YellowFlower] = Block;
    MaterialModes[RedRose] = Block;
    MaterialModes[BrownMushroom] = Block;
    MaterialModes[RedMushroom] = Block;
    MaterialModes[GoldBlock] = Block;
    MaterialModes[IronBlock] = Block;
    MaterialModes[DoubleStep] = Block;
    MaterialModes[Step] = HalfBlock;
    MaterialModes[Brick] = Block;
    MaterialModes[TNT] = Block;
    MaterialModes[Bookcase] = Block;
    MaterialModes[MossyCobblestone] = Block;
    MaterialModes[Obsidian] = Block;
    MaterialModes[Torch] = TorchBlock;
    MaterialModes[Fire] = Block;
    MaterialModes[MobSpawner] = Block;
    MaterialModes[WoodenStairs] = Block;
    MaterialModes[Chest] = Block;
    MaterialModes[RedstoneWire] = Block;
    MaterialModes[DiamondOre] = Block;
    MaterialModes[DiamondBlock] = Block;
    MaterialModes[Workbench] = Block;
    MaterialModes[Crops] = Block;
    MaterialModes[Soil] = Block;
    MaterialModes[Furnace] = Block;
    MaterialModes[BurningFurnace] = Block;
    MaterialModes[SignPost] = Block;
    MaterialModes[WoodenDoor] = Block;
    MaterialModes[Ladder] = Block;
    MaterialModes[MinecartTracks] = Block;
    MaterialModes[CobblestoneStairs] = Block;
    MaterialModes[WallSign] = Block;
    MaterialModes[Lever] = Block;
    MaterialModes[StonePressurePlate] = HalfBlock;
    MaterialModes[IronDoor] = Block;
    MaterialModes[WoodenPressurePlate] = Block;
    MaterialModes[RedstoneOre] = Block;
    MaterialModes[GlowingRedstoneOre] = Block;
    MaterialModes[RedstoneTorchOff] = TorchBlock;
    MaterialModes[RedstoneTorchOn] = TorchBlock;
    MaterialModes[StoneButton] = Block;
    MaterialModes[Snow] = Block;
    MaterialModes[Ice] = Block;
    MaterialModes[SnowBlock] = Block;
    MaterialModes[Cactus] = Block;
    MaterialModes[Clay] = Block;
    MaterialModes[Reed] = Block;
    MaterialModes[Jukebox] = Block;
    MaterialModes[Fence] = Block;
    MaterialModes[Pumpkin] = Block;
    MaterialModes[Bloodstone] = Block;
    MaterialModes[Slowsand] = Block;
    MaterialModes[Lightstone] = Block;
    MaterialModes[Portal] = Block;
    MaterialModes[Jackolantern] = Block;
    MaterialModes[Cake] = HalfBlock;
    MaterialModes[PineLeaves] = Block;
    MaterialModes[BirchLeaves] = Block;
    
    for (int i = 0; i < MaterialCount; i++) {
      MaterialSideColor[i].darken(50);
    }
    
    MaterialSideColor[Air] = MaterialColor[Air];
    MaterialSideColor[Water] = MaterialColor[Water];
    MaterialSideColor[StationaryWater] = MaterialColor[StationaryWater];
    MaterialSideColor[Torch] = MaterialColor[Wood];
    MaterialSideColor[RedstoneTorchOff] = MaterialColor[Wood];
    MaterialSideColor[RedstoneTorchOn] = MaterialColor[Wood];
  }
  
  void deinitialize_constants() {
    delete [] MaterialColor;
    delete [] MaterialSideColor;
  }
}
