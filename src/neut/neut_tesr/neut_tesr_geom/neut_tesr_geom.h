/* This file is part of the Neper software package. */
/* Copyright (C) 2003-2020, Romain Quey. */
/* See the COPYING file in the top-level directory. */

#ifdef __cplusplus
extern "C"
{
#endif

#ifndef  NEUT_VOX_GEOM_H
#define  NEUT_VOX_GEOM_H

extern int neut_tesr_vox_pos (struct TESR Tesr, int vox, int *pos);
extern int neut_tesr_vox_coo (struct TESR Tesr, int vox, double *coo);
extern int neut_tesr_vox_cell (struct TESR Tesr, int vox, int *pcell);

/// \brief Get the rpoint a point belongs to.
/// mode>=0 picks the voxel after, mode < 0 picks the voxel before
/// \return 0 on success, -1 on failure.
///
///
  extern int neut_tesr_coo_pos (struct TESR Tesr, double *coo, int mode, int *voxpos);

/// \brief Get the coordinate of a rpoint.
/// \return 0 on success, -1 on failure.
///
///
  extern int neut_tesr_pos_coo (struct TESR Tesr, int *voxpos, double *coo);

  extern int neut_tesr_perpos_pos (struct TESR Tesr, int *per, int *pos, int *pos2);

/// \brief Get the centre of a cell of a TESR structure.
/// \return 0 on success, -1 on failure.
///
///
  extern int neut_tesr_cell_centre (struct TESR Tesr, int cell, double *coo);

/// \brief Get the number of voxels in a cell of a TESR structure.
/// \return 0 on success, -1 on failure.
///
///
  extern int neut_tesr_cell_voxqty (struct TESR Tesr, int cell);

  extern int neut_tesr_voxqty (struct TESR Tesr);
  extern double neut_tesr_avcellvoxqty (struct TESR Tesr);

/// \brief Get the volume of a cell of a TESR structure.
/// \return 0 on success, -1 on failure.
///
///
  extern int neut_tesr_cell_volume (struct TESR Tesr, int cell, double *vol);
  extern int neut_tesr_cell_area (struct TESR Tesr, int cell, double *area);
  extern int neut_tesr_cell_size (struct TESR Tesr, int cell, double *size);

  extern void neut_tesr_rastercentre (struct TESR Tesr, double *coo);

  extern void neut_tesr_centre (struct TESR Tesr, double *coo);

  extern void neut_tesr_cell_diameq (struct TESR Tesr, int cell,
				     double *pval);
  extern void neut_tesr_cell_radeq (struct TESR Tesr, int cell, double *pval);

  extern void neut_tesr_cell_points (struct TESR Tesr, int cell,
				     int ***pts, int *pptqty);
  extern void neut_tesr_cell_coos (struct TESR Tesr, int cell,
				   double ***coos, int *pcooqty);

  extern void neut_tesr_cell_boundpoints (struct TESR Tesr, int cell,
					  int ***pts, int *pptqty,
					  int connectivity, int boundary);

  extern void neut_tesr_cell_cornerpoints (struct TESR Tesr, int cell,
					   int ***pts, int *pptqty);

  extern void neut_tesr_cell_convexity (struct TESR Tesr, int cell,
					double *pval);

  extern void neut_tesr_cell_aniso (struct TESR Tesr, int cell,
				    double **evect, double *eval);
  extern void neut_tesr_cell_anisoxyz (struct TESR Tesr, int cell,
				       double *fact);
  extern void neut_tesr_cells_anisoxyz (struct TESR Tesr, double *fact);

  extern void neut_tesr_bbox (struct TESR Tesr, double **bbox);
  extern void neut_tesr_bboxsize (struct TESR Tesr, double *bboxsize);

  extern int neut_tesr_pos_vox (struct TESR Tesr, int *pos, int *pvox);
  extern int neut_tesr_pos3_vox (struct TESR Tesr, int x, int y, int z, int *pvox);

#include"net_utils/net_utils.h"

#endif				/* NEUT_VOX_GEOM_H */

#ifdef __cplusplus
}
#endif
