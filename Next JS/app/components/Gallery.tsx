export default function Gallery() {
  const images = [
    "https://img.freepik.com/free-photo/closeup-scarlet-macaw-from-side-view-scarlet-macaw-closeup-head_488145-3540.jpg?semt=ais_hybrid&w=740&q=80",
    "https://img.freepik.com/free-photo/courage-man-jump-through-gap-hill-business-concept-idea_1323-262.jpg?semt=ais_hybrid&w=740&q=80",
  ];
  return (
    <div className="columns-2 md:columns-3 lg:columns-4 gap-3 space-y-3">
      {images.map((src, i) => (
        <div key={i} className="break-inside-avoid">
          <Image
            src={src}
            alt=""
            width={500}
            height={500}
            className="w-full h-auto rounded-xl"
          />
        </div>
      ))}
    </div>
  );
}
