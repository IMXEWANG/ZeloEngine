// automatically generated by the FlatBuffers compiler, do not modify


#ifndef FLATBUFFERS_GENERATED_SCENEDATA_FLATBUFFERS_H_
#define FLATBUFFERS_GENERATED_SCENEDATA_FLATBUFFERS_H_

#include "flatbuffers/flatbuffers.h"

namespace flatbuffers {

struct Vector2;

struct Vector3;

struct Vector4;

struct Matrix4x4;

struct Hierarchy;
struct HierarchyBuilder;

struct SceneGraph;
struct SceneGraphBuilder;

struct MeshData;
struct MeshDataBuilder;

struct Mesh;
struct MeshBuilder;

struct BoundingBox;

struct MaterialDescription;

struct Material;
struct MaterialBuilder;

struct SceneData;
struct SceneDataBuilder;

struct SceneComponentItem;

struct SceneComponent;
struct SceneComponentBuilder;

FLATBUFFERS_MANUALLY_ALIGNED_STRUCT(4) Vector2 FLATBUFFERS_FINAL_CLASS {
 private:
  float x_;
  float y_;

 public:
  Vector2()
      : x_(0),
        y_(0) {
  }
  Vector2(float _x, float _y)
      : x_(flatbuffers::EndianScalar(_x)),
        y_(flatbuffers::EndianScalar(_y)) {
  }
  float x() const {
    return flatbuffers::EndianScalar(x_);
  }
  float y() const {
    return flatbuffers::EndianScalar(y_);
  }
};
FLATBUFFERS_STRUCT_END(Vector2, 8);

FLATBUFFERS_MANUALLY_ALIGNED_STRUCT(4) Vector3 FLATBUFFERS_FINAL_CLASS {
 private:
  float x_;
  float y_;
  float z_;

 public:
  Vector3()
      : x_(0),
        y_(0),
        z_(0) {
  }
  Vector3(float _x, float _y, float _z)
      : x_(flatbuffers::EndianScalar(_x)),
        y_(flatbuffers::EndianScalar(_y)),
        z_(flatbuffers::EndianScalar(_z)) {
  }
  float x() const {
    return flatbuffers::EndianScalar(x_);
  }
  float y() const {
    return flatbuffers::EndianScalar(y_);
  }
  float z() const {
    return flatbuffers::EndianScalar(z_);
  }
};
FLATBUFFERS_STRUCT_END(Vector3, 12);

FLATBUFFERS_MANUALLY_ALIGNED_STRUCT(4) Vector4 FLATBUFFERS_FINAL_CLASS {
 private:
  float x_;
  float y_;
  float z_;
  float w_;

 public:
  Vector4()
      : x_(0),
        y_(0),
        z_(0),
        w_(0) {
  }
  Vector4(float _x, float _y, float _z, float _w)
      : x_(flatbuffers::EndianScalar(_x)),
        y_(flatbuffers::EndianScalar(_y)),
        z_(flatbuffers::EndianScalar(_z)),
        w_(flatbuffers::EndianScalar(_w)) {
  }
  float x() const {
    return flatbuffers::EndianScalar(x_);
  }
  float y() const {
    return flatbuffers::EndianScalar(y_);
  }
  float z() const {
    return flatbuffers::EndianScalar(z_);
  }
  float w() const {
    return flatbuffers::EndianScalar(w_);
  }
};
FLATBUFFERS_STRUCT_END(Vector4, 16);

FLATBUFFERS_MANUALLY_ALIGNED_STRUCT(4) Matrix4x4 FLATBUFFERS_FINAL_CLASS {
 private:
  float data_[16];

 public:
  Matrix4x4()
      : data_() {
  }
  Matrix4x4(flatbuffers::span<const float, 16> _data) {
    flatbuffers::CastToArray(data_).CopyFromSpan(_data);
  }
  const flatbuffers::Array<float, 16> *data() const {
    return &flatbuffers::CastToArray(data_);
  }
};
FLATBUFFERS_STRUCT_END(Matrix4x4, 64);

FLATBUFFERS_MANUALLY_ALIGNED_STRUCT(4) BoundingBox FLATBUFFERS_FINAL_CLASS {
 private:
  flatbuffers::Vector3 min__;
  flatbuffers::Vector3 max__;

 public:
  BoundingBox()
      : min__(),
        max__() {
  }
  BoundingBox(const flatbuffers::Vector3 &_min_, const flatbuffers::Vector3 &_max_)
      : min__(_min_),
        max__(_max_) {
  }
  const flatbuffers::Vector3 &min_() const {
    return min__;
  }
  const flatbuffers::Vector3 &max_() const {
    return max__;
  }
};
FLATBUFFERS_STRUCT_END(BoundingBox, 24);

FLATBUFFERS_MANUALLY_ALIGNED_STRUCT(8) MaterialDescription FLATBUFFERS_FINAL_CLASS {
 private:
  flatbuffers::Vector4 emissiveColor__;
  flatbuffers::Vector4 albedoColor__;
  flatbuffers::Vector4 roughness__;
  float transparencyFactor__;
  float alphaTest__;
  float metallicFactor__;
  uint32_t flags__;
  uint64_t ambientOcclusionMap__;
  uint64_t emissiveMap__;
  uint64_t albedoMap__;
  uint64_t metallicRoughnessMap__;
  uint64_t normalMap__;
  uint64_t opacityMap__;

 public:
  MaterialDescription()
      : emissiveColor__(),
        albedoColor__(),
        roughness__(),
        transparencyFactor__(0),
        alphaTest__(0),
        metallicFactor__(0),
        flags__(0),
        ambientOcclusionMap__(0),
        emissiveMap__(0),
        albedoMap__(0),
        metallicRoughnessMap__(0),
        normalMap__(0),
        opacityMap__(0) {
  }
  MaterialDescription(const flatbuffers::Vector4 &_emissiveColor_, const flatbuffers::Vector4 &_albedoColor_, const flatbuffers::Vector4 &_roughness_, float _transparencyFactor_, float _alphaTest_, float _metallicFactor_, uint32_t _flags_, uint64_t _ambientOcclusionMap_, uint64_t _emissiveMap_, uint64_t _albedoMap_, uint64_t _metallicRoughnessMap_, uint64_t _normalMap_, uint64_t _opacityMap_)
      : emissiveColor__(_emissiveColor_),
        albedoColor__(_albedoColor_),
        roughness__(_roughness_),
        transparencyFactor__(flatbuffers::EndianScalar(_transparencyFactor_)),
        alphaTest__(flatbuffers::EndianScalar(_alphaTest_)),
        metallicFactor__(flatbuffers::EndianScalar(_metallicFactor_)),
        flags__(flatbuffers::EndianScalar(_flags_)),
        ambientOcclusionMap__(flatbuffers::EndianScalar(_ambientOcclusionMap_)),
        emissiveMap__(flatbuffers::EndianScalar(_emissiveMap_)),
        albedoMap__(flatbuffers::EndianScalar(_albedoMap_)),
        metallicRoughnessMap__(flatbuffers::EndianScalar(_metallicRoughnessMap_)),
        normalMap__(flatbuffers::EndianScalar(_normalMap_)),
        opacityMap__(flatbuffers::EndianScalar(_opacityMap_)) {
  }
  const flatbuffers::Vector4 &emissiveColor_() const {
    return emissiveColor__;
  }
  const flatbuffers::Vector4 &albedoColor_() const {
    return albedoColor__;
  }
  const flatbuffers::Vector4 &roughness_() const {
    return roughness__;
  }
  float transparencyFactor_() const {
    return flatbuffers::EndianScalar(transparencyFactor__);
  }
  float alphaTest_() const {
    return flatbuffers::EndianScalar(alphaTest__);
  }
  float metallicFactor_() const {
    return flatbuffers::EndianScalar(metallicFactor__);
  }
  uint32_t flags_() const {
    return flatbuffers::EndianScalar(flags__);
  }
  uint64_t ambientOcclusionMap_() const {
    return flatbuffers::EndianScalar(ambientOcclusionMap__);
  }
  uint64_t emissiveMap_() const {
    return flatbuffers::EndianScalar(emissiveMap__);
  }
  uint64_t albedoMap_() const {
    return flatbuffers::EndianScalar(albedoMap__);
  }
  uint64_t metallicRoughnessMap_() const {
    return flatbuffers::EndianScalar(metallicRoughnessMap__);
  }
  uint64_t normalMap_() const {
    return flatbuffers::EndianScalar(normalMap__);
  }
  uint64_t opacityMap_() const {
    return flatbuffers::EndianScalar(opacityMap__);
  }
};
FLATBUFFERS_STRUCT_END(MaterialDescription, 112);

FLATBUFFERS_MANUALLY_ALIGNED_STRUCT(4) SceneComponentItem FLATBUFFERS_FINAL_CLASS {
 private:
  uint32_t key_;
  uint32_t value_;

 public:
  SceneComponentItem()
      : key_(0),
        value_(0) {
  }
  SceneComponentItem(uint32_t _key, uint32_t _value)
      : key_(flatbuffers::EndianScalar(_key)),
        value_(flatbuffers::EndianScalar(_value)) {
  }
  uint32_t key() const {
    return flatbuffers::EndianScalar(key_);
  }
  bool KeyCompareLessThan(const SceneComponentItem *o) const {
    return key() < o->key();
  }
  int KeyCompareWithValue(uint32_t val) const {
    return static_cast<int>(key() > val) - static_cast<int>(key() < val);
  }
  uint32_t value() const {
    return flatbuffers::EndianScalar(value_);
  }
};
FLATBUFFERS_STRUCT_END(SceneComponentItem, 8);

struct Hierarchy FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  typedef HierarchyBuilder Builder;
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_PARENT_ = 4,
    VT_FIRSTCHILD_ = 6,
    VT_NEXTSIBLING_ = 8,
    VT_LASTSIBLING_ = 10,
    VT_LEVEL_ = 12
  };
  int32_t parent_() const {
    return GetField<int32_t>(VT_PARENT_, 0);
  }
  int32_t firstChild_() const {
    return GetField<int32_t>(VT_FIRSTCHILD_, 0);
  }
  int32_t nextSibling_() const {
    return GetField<int32_t>(VT_NEXTSIBLING_, 0);
  }
  int32_t lastSibling_() const {
    return GetField<int32_t>(VT_LASTSIBLING_, 0);
  }
  int32_t level_() const {
    return GetField<int32_t>(VT_LEVEL_, 0);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<int32_t>(verifier, VT_PARENT_) &&
           VerifyField<int32_t>(verifier, VT_FIRSTCHILD_) &&
           VerifyField<int32_t>(verifier, VT_NEXTSIBLING_) &&
           VerifyField<int32_t>(verifier, VT_LASTSIBLING_) &&
           VerifyField<int32_t>(verifier, VT_LEVEL_) &&
           verifier.EndTable();
  }
};

struct HierarchyBuilder {
  typedef Hierarchy Table;
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_parent_(int32_t parent_) {
    fbb_.AddElement<int32_t>(Hierarchy::VT_PARENT_, parent_, 0);
  }
  void add_firstChild_(int32_t firstChild_) {
    fbb_.AddElement<int32_t>(Hierarchy::VT_FIRSTCHILD_, firstChild_, 0);
  }
  void add_nextSibling_(int32_t nextSibling_) {
    fbb_.AddElement<int32_t>(Hierarchy::VT_NEXTSIBLING_, nextSibling_, 0);
  }
  void add_lastSibling_(int32_t lastSibling_) {
    fbb_.AddElement<int32_t>(Hierarchy::VT_LASTSIBLING_, lastSibling_, 0);
  }
  void add_level_(int32_t level_) {
    fbb_.AddElement<int32_t>(Hierarchy::VT_LEVEL_, level_, 0);
  }
  explicit HierarchyBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  flatbuffers::Offset<Hierarchy> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<Hierarchy>(end);
    return o;
  }
};

inline flatbuffers::Offset<Hierarchy> CreateHierarchy(
    flatbuffers::FlatBufferBuilder &_fbb,
    int32_t parent_ = 0,
    int32_t firstChild_ = 0,
    int32_t nextSibling_ = 0,
    int32_t lastSibling_ = 0,
    int32_t level_ = 0) {
  HierarchyBuilder builder_(_fbb);
  builder_.add_level_(level_);
  builder_.add_lastSibling_(lastSibling_);
  builder_.add_nextSibling_(nextSibling_);
  builder_.add_firstChild_(firstChild_);
  builder_.add_parent_(parent_);
  return builder_.Finish();
}

struct SceneGraph FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  typedef SceneGraphBuilder Builder;
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_LOCALTRANSFORM_ = 4,
    VT_GLOBALTRANSFORM_ = 6,
    VT_HIERARCHY_ = 8,
    VT_MESHES_ = 10,
    VT_MATERIALFORNODE_ = 12,
    VT_NAMEFORNODE_ = 14,
    VT_NAMES_ = 16,
    VT_MATERIALNAMES_ = 18
  };
  const flatbuffers::Vector<const flatbuffers::Matrix4x4 *> *localTransform_() const {
    return GetPointer<const flatbuffers::Vector<const flatbuffers::Matrix4x4 *> *>(VT_LOCALTRANSFORM_);
  }
  const flatbuffers::Vector<const flatbuffers::Matrix4x4 *> *globalTransform_() const {
    return GetPointer<const flatbuffers::Vector<const flatbuffers::Matrix4x4 *> *>(VT_GLOBALTRANSFORM_);
  }
  const flatbuffers::Vector<flatbuffers::Offset<flatbuffers::Hierarchy>> *hierarchy_() const {
    return GetPointer<const flatbuffers::Vector<flatbuffers::Offset<flatbuffers::Hierarchy>> *>(VT_HIERARCHY_);
  }
  const flatbuffers::Vector<const flatbuffers::SceneComponentItem *> *meshes_() const {
    return GetPointer<const flatbuffers::Vector<const flatbuffers::SceneComponentItem *> *>(VT_MESHES_);
  }
  const flatbuffers::Vector<const flatbuffers::SceneComponentItem *> *materialForNode_() const {
    return GetPointer<const flatbuffers::Vector<const flatbuffers::SceneComponentItem *> *>(VT_MATERIALFORNODE_);
  }
  const flatbuffers::Vector<const flatbuffers::SceneComponentItem *> *nameForNode_() const {
    return GetPointer<const flatbuffers::Vector<const flatbuffers::SceneComponentItem *> *>(VT_NAMEFORNODE_);
  }
  const flatbuffers::Vector<flatbuffers::Offset<flatbuffers::String>> *names_() const {
    return GetPointer<const flatbuffers::Vector<flatbuffers::Offset<flatbuffers::String>> *>(VT_NAMES_);
  }
  const flatbuffers::Vector<flatbuffers::Offset<flatbuffers::String>> *materialNames_() const {
    return GetPointer<const flatbuffers::Vector<flatbuffers::Offset<flatbuffers::String>> *>(VT_MATERIALNAMES_);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyOffset(verifier, VT_LOCALTRANSFORM_) &&
           verifier.VerifyVector(localTransform_()) &&
           VerifyOffset(verifier, VT_GLOBALTRANSFORM_) &&
           verifier.VerifyVector(globalTransform_()) &&
           VerifyOffset(verifier, VT_HIERARCHY_) &&
           verifier.VerifyVector(hierarchy_()) &&
           verifier.VerifyVectorOfTables(hierarchy_()) &&
           VerifyOffset(verifier, VT_MESHES_) &&
           verifier.VerifyVector(meshes_()) &&
           VerifyOffset(verifier, VT_MATERIALFORNODE_) &&
           verifier.VerifyVector(materialForNode_()) &&
           VerifyOffset(verifier, VT_NAMEFORNODE_) &&
           verifier.VerifyVector(nameForNode_()) &&
           VerifyOffset(verifier, VT_NAMES_) &&
           verifier.VerifyVector(names_()) &&
           verifier.VerifyVectorOfStrings(names_()) &&
           VerifyOffset(verifier, VT_MATERIALNAMES_) &&
           verifier.VerifyVector(materialNames_()) &&
           verifier.VerifyVectorOfStrings(materialNames_()) &&
           verifier.EndTable();
  }
};

struct SceneGraphBuilder {
  typedef SceneGraph Table;
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_localTransform_(flatbuffers::Offset<flatbuffers::Vector<const flatbuffers::Matrix4x4 *>> localTransform_) {
    fbb_.AddOffset(SceneGraph::VT_LOCALTRANSFORM_, localTransform_);
  }
  void add_globalTransform_(flatbuffers::Offset<flatbuffers::Vector<const flatbuffers::Matrix4x4 *>> globalTransform_) {
    fbb_.AddOffset(SceneGraph::VT_GLOBALTRANSFORM_, globalTransform_);
  }
  void add_hierarchy_(flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<flatbuffers::Hierarchy>>> hierarchy_) {
    fbb_.AddOffset(SceneGraph::VT_HIERARCHY_, hierarchy_);
  }
  void add_meshes_(flatbuffers::Offset<flatbuffers::Vector<const flatbuffers::SceneComponentItem *>> meshes_) {
    fbb_.AddOffset(SceneGraph::VT_MESHES_, meshes_);
  }
  void add_materialForNode_(flatbuffers::Offset<flatbuffers::Vector<const flatbuffers::SceneComponentItem *>> materialForNode_) {
    fbb_.AddOffset(SceneGraph::VT_MATERIALFORNODE_, materialForNode_);
  }
  void add_nameForNode_(flatbuffers::Offset<flatbuffers::Vector<const flatbuffers::SceneComponentItem *>> nameForNode_) {
    fbb_.AddOffset(SceneGraph::VT_NAMEFORNODE_, nameForNode_);
  }
  void add_names_(flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<flatbuffers::String>>> names_) {
    fbb_.AddOffset(SceneGraph::VT_NAMES_, names_);
  }
  void add_materialNames_(flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<flatbuffers::String>>> materialNames_) {
    fbb_.AddOffset(SceneGraph::VT_MATERIALNAMES_, materialNames_);
  }
  explicit SceneGraphBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  flatbuffers::Offset<SceneGraph> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<SceneGraph>(end);
    return o;
  }
};

inline flatbuffers::Offset<SceneGraph> CreateSceneGraph(
    flatbuffers::FlatBufferBuilder &_fbb,
    flatbuffers::Offset<flatbuffers::Vector<const flatbuffers::Matrix4x4 *>> localTransform_ = 0,
    flatbuffers::Offset<flatbuffers::Vector<const flatbuffers::Matrix4x4 *>> globalTransform_ = 0,
    flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<flatbuffers::Hierarchy>>> hierarchy_ = 0,
    flatbuffers::Offset<flatbuffers::Vector<const flatbuffers::SceneComponentItem *>> meshes_ = 0,
    flatbuffers::Offset<flatbuffers::Vector<const flatbuffers::SceneComponentItem *>> materialForNode_ = 0,
    flatbuffers::Offset<flatbuffers::Vector<const flatbuffers::SceneComponentItem *>> nameForNode_ = 0,
    flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<flatbuffers::String>>> names_ = 0,
    flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<flatbuffers::String>>> materialNames_ = 0) {
  SceneGraphBuilder builder_(_fbb);
  builder_.add_materialNames_(materialNames_);
  builder_.add_names_(names_);
  builder_.add_nameForNode_(nameForNode_);
  builder_.add_materialForNode_(materialForNode_);
  builder_.add_meshes_(meshes_);
  builder_.add_hierarchy_(hierarchy_);
  builder_.add_globalTransform_(globalTransform_);
  builder_.add_localTransform_(localTransform_);
  return builder_.Finish();
}

inline flatbuffers::Offset<SceneGraph> CreateSceneGraphDirect(
    flatbuffers::FlatBufferBuilder &_fbb,
    const std::vector<flatbuffers::Matrix4x4> *localTransform_ = nullptr,
    const std::vector<flatbuffers::Matrix4x4> *globalTransform_ = nullptr,
    const std::vector<flatbuffers::Offset<flatbuffers::Hierarchy>> *hierarchy_ = nullptr,
    std::vector<flatbuffers::SceneComponentItem> *meshes_ = nullptr,
    std::vector<flatbuffers::SceneComponentItem> *materialForNode_ = nullptr,
    std::vector<flatbuffers::SceneComponentItem> *nameForNode_ = nullptr,
    const std::vector<flatbuffers::Offset<flatbuffers::String>> *names_ = nullptr,
    const std::vector<flatbuffers::Offset<flatbuffers::String>> *materialNames_ = nullptr) {
  auto localTransform___ = localTransform_ ? _fbb.CreateVectorOfStructs<flatbuffers::Matrix4x4>(*localTransform_) : 0;
  auto globalTransform___ = globalTransform_ ? _fbb.CreateVectorOfStructs<flatbuffers::Matrix4x4>(*globalTransform_) : 0;
  auto hierarchy___ = hierarchy_ ? _fbb.CreateVector<flatbuffers::Offset<flatbuffers::Hierarchy>>(*hierarchy_) : 0;
  auto meshes___ = meshes_ ? _fbb.CreateVectorOfSortedStructs<flatbuffers::SceneComponentItem>(meshes_) : 0;
  auto materialForNode___ = materialForNode_ ? _fbb.CreateVectorOfSortedStructs<flatbuffers::SceneComponentItem>(materialForNode_) : 0;
  auto nameForNode___ = nameForNode_ ? _fbb.CreateVectorOfSortedStructs<flatbuffers::SceneComponentItem>(nameForNode_) : 0;
  auto names___ = names_ ? _fbb.CreateVector<flatbuffers::Offset<flatbuffers::String>>(*names_) : 0;
  auto materialNames___ = materialNames_ ? _fbb.CreateVector<flatbuffers::Offset<flatbuffers::String>>(*materialNames_) : 0;
  return flatbuffers::CreateSceneGraph(
      _fbb,
      localTransform___,
      globalTransform___,
      hierarchy___,
      meshes___,
      materialForNode___,
      nameForNode___,
      names___,
      materialNames___);
}

struct MeshData FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  typedef MeshDataBuilder Builder;
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_INDEXDATA_ = 4,
    VT_VERTEXDATA_ = 6,
    VT_MESHES_ = 8,
    VT_BOXES_ = 10
  };
  const flatbuffers::Vector<uint32_t> *indexData_() const {
    return GetPointer<const flatbuffers::Vector<uint32_t> *>(VT_INDEXDATA_);
  }
  const flatbuffers::Vector<float> *vertexData_() const {
    return GetPointer<const flatbuffers::Vector<float> *>(VT_VERTEXDATA_);
  }
  const flatbuffers::Vector<flatbuffers::Offset<flatbuffers::Mesh>> *meshes_() const {
    return GetPointer<const flatbuffers::Vector<flatbuffers::Offset<flatbuffers::Mesh>> *>(VT_MESHES_);
  }
  const flatbuffers::Vector<const flatbuffers::BoundingBox *> *boxes_() const {
    return GetPointer<const flatbuffers::Vector<const flatbuffers::BoundingBox *> *>(VT_BOXES_);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyOffset(verifier, VT_INDEXDATA_) &&
           verifier.VerifyVector(indexData_()) &&
           VerifyOffset(verifier, VT_VERTEXDATA_) &&
           verifier.VerifyVector(vertexData_()) &&
           VerifyOffset(verifier, VT_MESHES_) &&
           verifier.VerifyVector(meshes_()) &&
           verifier.VerifyVectorOfTables(meshes_()) &&
           VerifyOffset(verifier, VT_BOXES_) &&
           verifier.VerifyVector(boxes_()) &&
           verifier.EndTable();
  }
};

struct MeshDataBuilder {
  typedef MeshData Table;
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_indexData_(flatbuffers::Offset<flatbuffers::Vector<uint32_t>> indexData_) {
    fbb_.AddOffset(MeshData::VT_INDEXDATA_, indexData_);
  }
  void add_vertexData_(flatbuffers::Offset<flatbuffers::Vector<float>> vertexData_) {
    fbb_.AddOffset(MeshData::VT_VERTEXDATA_, vertexData_);
  }
  void add_meshes_(flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<flatbuffers::Mesh>>> meshes_) {
    fbb_.AddOffset(MeshData::VT_MESHES_, meshes_);
  }
  void add_boxes_(flatbuffers::Offset<flatbuffers::Vector<const flatbuffers::BoundingBox *>> boxes_) {
    fbb_.AddOffset(MeshData::VT_BOXES_, boxes_);
  }
  explicit MeshDataBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  flatbuffers::Offset<MeshData> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<MeshData>(end);
    return o;
  }
};

inline flatbuffers::Offset<MeshData> CreateMeshData(
    flatbuffers::FlatBufferBuilder &_fbb,
    flatbuffers::Offset<flatbuffers::Vector<uint32_t>> indexData_ = 0,
    flatbuffers::Offset<flatbuffers::Vector<float>> vertexData_ = 0,
    flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<flatbuffers::Mesh>>> meshes_ = 0,
    flatbuffers::Offset<flatbuffers::Vector<const flatbuffers::BoundingBox *>> boxes_ = 0) {
  MeshDataBuilder builder_(_fbb);
  builder_.add_boxes_(boxes_);
  builder_.add_meshes_(meshes_);
  builder_.add_vertexData_(vertexData_);
  builder_.add_indexData_(indexData_);
  return builder_.Finish();
}

inline flatbuffers::Offset<MeshData> CreateMeshDataDirect(
    flatbuffers::FlatBufferBuilder &_fbb,
    const std::vector<uint32_t> *indexData_ = nullptr,
    const std::vector<float> *vertexData_ = nullptr,
    const std::vector<flatbuffers::Offset<flatbuffers::Mesh>> *meshes_ = nullptr,
    const std::vector<flatbuffers::BoundingBox> *boxes_ = nullptr) {
  auto indexData___ = indexData_ ? _fbb.CreateVector<uint32_t>(*indexData_) : 0;
  auto vertexData___ = vertexData_ ? _fbb.CreateVector<float>(*vertexData_) : 0;
  auto meshes___ = meshes_ ? _fbb.CreateVector<flatbuffers::Offset<flatbuffers::Mesh>>(*meshes_) : 0;
  auto boxes___ = boxes_ ? _fbb.CreateVectorOfStructs<flatbuffers::BoundingBox>(*boxes_) : 0;
  return flatbuffers::CreateMeshData(
      _fbb,
      indexData___,
      vertexData___,
      meshes___,
      boxes___);
}

struct Mesh FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  typedef MeshBuilder Builder;
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_LODCOUNT = 4,
    VT_STREAMCOUNT = 6,
    VT_INDEXOFFSET = 8,
    VT_VERTEXOFFSET = 10,
    VT_VERTEXCOUNT = 12,
    VT_LODOFFSET = 14,
    VT_STREAMOFFSET = 16,
    VT_STREAMELEMENTSIZE = 18
  };
  uint32_t lodCount() const {
    return GetField<uint32_t>(VT_LODCOUNT, 0);
  }
  uint32_t streamCount() const {
    return GetField<uint32_t>(VT_STREAMCOUNT, 0);
  }
  uint32_t indexOffset() const {
    return GetField<uint32_t>(VT_INDEXOFFSET, 0);
  }
  uint32_t vertexOffset() const {
    return GetField<uint32_t>(VT_VERTEXOFFSET, 0);
  }
  uint32_t vertexCount() const {
    return GetField<uint32_t>(VT_VERTEXCOUNT, 0);
  }
  const flatbuffers::Vector<uint32_t> *lodOffset() const {
    return GetPointer<const flatbuffers::Vector<uint32_t> *>(VT_LODOFFSET);
  }
  const flatbuffers::Vector<uint32_t> *streamOffset() const {
    return GetPointer<const flatbuffers::Vector<uint32_t> *>(VT_STREAMOFFSET);
  }
  const flatbuffers::Vector<uint32_t> *streamElementSize() const {
    return GetPointer<const flatbuffers::Vector<uint32_t> *>(VT_STREAMELEMENTSIZE);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<uint32_t>(verifier, VT_LODCOUNT) &&
           VerifyField<uint32_t>(verifier, VT_STREAMCOUNT) &&
           VerifyField<uint32_t>(verifier, VT_INDEXOFFSET) &&
           VerifyField<uint32_t>(verifier, VT_VERTEXOFFSET) &&
           VerifyField<uint32_t>(verifier, VT_VERTEXCOUNT) &&
           VerifyOffset(verifier, VT_LODOFFSET) &&
           verifier.VerifyVector(lodOffset()) &&
           VerifyOffset(verifier, VT_STREAMOFFSET) &&
           verifier.VerifyVector(streamOffset()) &&
           VerifyOffset(verifier, VT_STREAMELEMENTSIZE) &&
           verifier.VerifyVector(streamElementSize()) &&
           verifier.EndTable();
  }
};

struct MeshBuilder {
  typedef Mesh Table;
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_lodCount(uint32_t lodCount) {
    fbb_.AddElement<uint32_t>(Mesh::VT_LODCOUNT, lodCount, 0);
  }
  void add_streamCount(uint32_t streamCount) {
    fbb_.AddElement<uint32_t>(Mesh::VT_STREAMCOUNT, streamCount, 0);
  }
  void add_indexOffset(uint32_t indexOffset) {
    fbb_.AddElement<uint32_t>(Mesh::VT_INDEXOFFSET, indexOffset, 0);
  }
  void add_vertexOffset(uint32_t vertexOffset) {
    fbb_.AddElement<uint32_t>(Mesh::VT_VERTEXOFFSET, vertexOffset, 0);
  }
  void add_vertexCount(uint32_t vertexCount) {
    fbb_.AddElement<uint32_t>(Mesh::VT_VERTEXCOUNT, vertexCount, 0);
  }
  void add_lodOffset(flatbuffers::Offset<flatbuffers::Vector<uint32_t>> lodOffset) {
    fbb_.AddOffset(Mesh::VT_LODOFFSET, lodOffset);
  }
  void add_streamOffset(flatbuffers::Offset<flatbuffers::Vector<uint32_t>> streamOffset) {
    fbb_.AddOffset(Mesh::VT_STREAMOFFSET, streamOffset);
  }
  void add_streamElementSize(flatbuffers::Offset<flatbuffers::Vector<uint32_t>> streamElementSize) {
    fbb_.AddOffset(Mesh::VT_STREAMELEMENTSIZE, streamElementSize);
  }
  explicit MeshBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  flatbuffers::Offset<Mesh> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<Mesh>(end);
    return o;
  }
};

inline flatbuffers::Offset<Mesh> CreateMesh(
    flatbuffers::FlatBufferBuilder &_fbb,
    uint32_t lodCount = 0,
    uint32_t streamCount = 0,
    uint32_t indexOffset = 0,
    uint32_t vertexOffset = 0,
    uint32_t vertexCount = 0,
    flatbuffers::Offset<flatbuffers::Vector<uint32_t>> lodOffset = 0,
    flatbuffers::Offset<flatbuffers::Vector<uint32_t>> streamOffset = 0,
    flatbuffers::Offset<flatbuffers::Vector<uint32_t>> streamElementSize = 0) {
  MeshBuilder builder_(_fbb);
  builder_.add_streamElementSize(streamElementSize);
  builder_.add_streamOffset(streamOffset);
  builder_.add_lodOffset(lodOffset);
  builder_.add_vertexCount(vertexCount);
  builder_.add_vertexOffset(vertexOffset);
  builder_.add_indexOffset(indexOffset);
  builder_.add_streamCount(streamCount);
  builder_.add_lodCount(lodCount);
  return builder_.Finish();
}

inline flatbuffers::Offset<Mesh> CreateMeshDirect(
    flatbuffers::FlatBufferBuilder &_fbb,
    uint32_t lodCount = 0,
    uint32_t streamCount = 0,
    uint32_t indexOffset = 0,
    uint32_t vertexOffset = 0,
    uint32_t vertexCount = 0,
    const std::vector<uint32_t> *lodOffset = nullptr,
    const std::vector<uint32_t> *streamOffset = nullptr,
    const std::vector<uint32_t> *streamElementSize = nullptr) {
  auto lodOffset__ = lodOffset ? _fbb.CreateVector<uint32_t>(*lodOffset) : 0;
  auto streamOffset__ = streamOffset ? _fbb.CreateVector<uint32_t>(*streamOffset) : 0;
  auto streamElementSize__ = streamElementSize ? _fbb.CreateVector<uint32_t>(*streamElementSize) : 0;
  return flatbuffers::CreateMesh(
      _fbb,
      lodCount,
      streamCount,
      indexOffset,
      vertexOffset,
      vertexCount,
      lodOffset__,
      streamOffset__,
      streamElementSize__);
}

struct Material FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  typedef MaterialBuilder Builder;
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_MATERIALS = 4,
    VT_FILES = 6
  };
  const flatbuffers::Vector<const flatbuffers::MaterialDescription *> *materials() const {
    return GetPointer<const flatbuffers::Vector<const flatbuffers::MaterialDescription *> *>(VT_MATERIALS);
  }
  const flatbuffers::Vector<flatbuffers::Offset<flatbuffers::String>> *files() const {
    return GetPointer<const flatbuffers::Vector<flatbuffers::Offset<flatbuffers::String>> *>(VT_FILES);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyOffset(verifier, VT_MATERIALS) &&
           verifier.VerifyVector(materials()) &&
           VerifyOffset(verifier, VT_FILES) &&
           verifier.VerifyVector(files()) &&
           verifier.VerifyVectorOfStrings(files()) &&
           verifier.EndTable();
  }
};

struct MaterialBuilder {
  typedef Material Table;
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_materials(flatbuffers::Offset<flatbuffers::Vector<const flatbuffers::MaterialDescription *>> materials) {
    fbb_.AddOffset(Material::VT_MATERIALS, materials);
  }
  void add_files(flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<flatbuffers::String>>> files) {
    fbb_.AddOffset(Material::VT_FILES, files);
  }
  explicit MaterialBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  flatbuffers::Offset<Material> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<Material>(end);
    return o;
  }
};

inline flatbuffers::Offset<Material> CreateMaterial(
    flatbuffers::FlatBufferBuilder &_fbb,
    flatbuffers::Offset<flatbuffers::Vector<const flatbuffers::MaterialDescription *>> materials = 0,
    flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<flatbuffers::String>>> files = 0) {
  MaterialBuilder builder_(_fbb);
  builder_.add_files(files);
  builder_.add_materials(materials);
  return builder_.Finish();
}

inline flatbuffers::Offset<Material> CreateMaterialDirect(
    flatbuffers::FlatBufferBuilder &_fbb,
    const std::vector<flatbuffers::MaterialDescription> *materials = nullptr,
    const std::vector<flatbuffers::Offset<flatbuffers::String>> *files = nullptr) {
  auto materials__ = materials ? _fbb.CreateVectorOfStructs<flatbuffers::MaterialDescription>(*materials) : 0;
  auto files__ = files ? _fbb.CreateVector<flatbuffers::Offset<flatbuffers::String>>(*files) : 0;
  return flatbuffers::CreateMaterial(
      _fbb,
      materials__,
      files__);
}

struct SceneData FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  typedef SceneDataBuilder Builder;
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_MESHDATA = 4,
    VT_SCENEGRAPH = 6,
    VT_MATERIAL = 8
  };
  const flatbuffers::MeshData *meshData() const {
    return GetPointer<const flatbuffers::MeshData *>(VT_MESHDATA);
  }
  const flatbuffers::SceneGraph *sceneGraph() const {
    return GetPointer<const flatbuffers::SceneGraph *>(VT_SCENEGRAPH);
  }
  const flatbuffers::Material *material() const {
    return GetPointer<const flatbuffers::Material *>(VT_MATERIAL);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyOffset(verifier, VT_MESHDATA) &&
           verifier.VerifyTable(meshData()) &&
           VerifyOffset(verifier, VT_SCENEGRAPH) &&
           verifier.VerifyTable(sceneGraph()) &&
           VerifyOffset(verifier, VT_MATERIAL) &&
           verifier.VerifyTable(material()) &&
           verifier.EndTable();
  }
};

struct SceneDataBuilder {
  typedef SceneData Table;
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_meshData(flatbuffers::Offset<flatbuffers::MeshData> meshData) {
    fbb_.AddOffset(SceneData::VT_MESHDATA, meshData);
  }
  void add_sceneGraph(flatbuffers::Offset<flatbuffers::SceneGraph> sceneGraph) {
    fbb_.AddOffset(SceneData::VT_SCENEGRAPH, sceneGraph);
  }
  void add_material(flatbuffers::Offset<flatbuffers::Material> material) {
    fbb_.AddOffset(SceneData::VT_MATERIAL, material);
  }
  explicit SceneDataBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  flatbuffers::Offset<SceneData> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<SceneData>(end);
    return o;
  }
};

inline flatbuffers::Offset<SceneData> CreateSceneData(
    flatbuffers::FlatBufferBuilder &_fbb,
    flatbuffers::Offset<flatbuffers::MeshData> meshData = 0,
    flatbuffers::Offset<flatbuffers::SceneGraph> sceneGraph = 0,
    flatbuffers::Offset<flatbuffers::Material> material = 0) {
  SceneDataBuilder builder_(_fbb);
  builder_.add_material(material);
  builder_.add_sceneGraph(sceneGraph);
  builder_.add_meshData(meshData);
  return builder_.Finish();
}

struct SceneComponent FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  typedef SceneComponentBuilder Builder;
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_ITEMS = 4
  };
  const flatbuffers::Vector<const flatbuffers::SceneComponentItem *> *items() const {
    return GetPointer<const flatbuffers::Vector<const flatbuffers::SceneComponentItem *> *>(VT_ITEMS);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyOffset(verifier, VT_ITEMS) &&
           verifier.VerifyVector(items()) &&
           verifier.EndTable();
  }
};

struct SceneComponentBuilder {
  typedef SceneComponent Table;
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_items(flatbuffers::Offset<flatbuffers::Vector<const flatbuffers::SceneComponentItem *>> items) {
    fbb_.AddOffset(SceneComponent::VT_ITEMS, items);
  }
  explicit SceneComponentBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  flatbuffers::Offset<SceneComponent> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<SceneComponent>(end);
    return o;
  }
};

inline flatbuffers::Offset<SceneComponent> CreateSceneComponent(
    flatbuffers::FlatBufferBuilder &_fbb,
    flatbuffers::Offset<flatbuffers::Vector<const flatbuffers::SceneComponentItem *>> items = 0) {
  SceneComponentBuilder builder_(_fbb);
  builder_.add_items(items);
  return builder_.Finish();
}

inline flatbuffers::Offset<SceneComponent> CreateSceneComponentDirect(
    flatbuffers::FlatBufferBuilder &_fbb,
    std::vector<flatbuffers::SceneComponentItem> *items = nullptr) {
  auto items__ = items ? _fbb.CreateVectorOfSortedStructs<flatbuffers::SceneComponentItem>(items) : 0;
  return flatbuffers::CreateSceneComponent(
      _fbb,
      items__);
}

inline const flatbuffers::SceneData *GetSceneData(const void *buf) {
  return flatbuffers::GetRoot<flatbuffers::SceneData>(buf);
}

inline const flatbuffers::SceneData *GetSizePrefixedSceneData(const void *buf) {
  return flatbuffers::GetSizePrefixedRoot<flatbuffers::SceneData>(buf);
}

inline bool VerifySceneDataBuffer(
    flatbuffers::Verifier &verifier) {
  return verifier.VerifyBuffer<flatbuffers::SceneData>(nullptr);
}

inline bool VerifySizePrefixedSceneDataBuffer(
    flatbuffers::Verifier &verifier) {
  return verifier.VerifySizePrefixedBuffer<flatbuffers::SceneData>(nullptr);
}

inline void FinishSceneDataBuffer(
    flatbuffers::FlatBufferBuilder &fbb,
    flatbuffers::Offset<flatbuffers::SceneData> root) {
  fbb.Finish(root);
}

inline void FinishSizePrefixedSceneDataBuffer(
    flatbuffers::FlatBufferBuilder &fbb,
    flatbuffers::Offset<flatbuffers::SceneData> root) {
  fbb.FinishSizePrefixed(root);
}

}  // namespace flatbuffers

#endif  // FLATBUFFERS_GENERATED_SCENEDATA_FLATBUFFERS_H_
